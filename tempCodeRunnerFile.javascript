const express = require('express');
const cors = require('cors');
const bodyParser = require('body-parser');
const cookieParser= require('cookie-parser');
const methodoverride = require('method-override')
var errorHandler = require('errorhandler')
var { ValidationError } = require('express-validation');


require('./config/config');
require('./db_connection/mongo_connection');
require('./db_connection/pg_connection');
const db = require('./pg_model/index');
const { SERVER_PORT } = process.env;

const app = express();
//const whitelist = ['http://localhost:4200'];

app.use(cors());
app.use(bodyParser.urlencoded({extended: true}));
app.use(cookieParser());
// parse application/json
app.use(bodyParser.json());
app.use(methodoverride());
// ...
app.use(errorHandler({ dumpExceptions: true, showStack: true })); 
app.use(['/api/v1', '/api/v2'],require('./config/router.config'));

app.use(function(err, req, res, next) {
    if (err instanceof ValidationError) {
      return res.status(err.statusCode).json({message: err?.details?.body[0].message});
    }
   
    return res.status(500).json(err)
  })

//   process.on('unhandledRejection', (reason, promise) => {
//     console.log('Unhandled Rejection at:', reason.stack || reason)
//     // Recommended: send the information to sentry.io
//     // or whatever crash reporting service you use
//   });

//synchronizing the database and forcing it to false so we dont lose data
db.sequelize.sync({ force: false }).then(() => {
    console.log("db has been re sync")
})


app.listen(SERVER_PORT, () => {
    console.log("server is running on port "+ SERVER_PORT);
})