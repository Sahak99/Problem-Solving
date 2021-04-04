const express = require('express');
const bodyParser = require('body-parser');
const mongoose = require('mongoose');
const app = express();
const port = 3000;

mongoose.connect('mongodb://localhost:27017/test', {useNewUrlParser: true, useUnifiedTopology: true});

app.use(bodyParser.json());

const User = mongoose.model('User',{name:String});
const putin5 = new User({name: 'Putin5'});

app.get('/v1',(req,res) => {
   res.send('Home Page')
})

app.get('/v1/users',(req,res) => {
   res.send([{"username":"Putin5"},{"username":"megaTrump"}])
})

app.get('/v1/users/16',(req,res) => {              //Es a eli db-ic uxarkacy
   res.send({putin5})
})

app.get('/v1/users/16/photos/2',(req,res) => {
   res.send('Putin 5 photo, photoId 2')
})

app.get('/v1/users/16/photos/2/comments',(req,res) => {
   res.send('Putin 5 photo, photoId 2, comments')
})

app.get('/v1/users/16/followers',(req,res) => {
   res.send('Putin 5 followers')
})

app.post('/v1/users',(req,res) => {
   res.send('Ok bro');
   console.log(req.body);
})

app.listen(port,() => {
  console.log(`Example app listnening at http://localhost:${port}`)
})
