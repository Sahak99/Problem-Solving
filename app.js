const express = require('express');
const bodyParser = require('body-parser');
const app = express();
const port = 3000;

app.use(bodyParser.json());

app.get('/v1',(req,res) => {
   res.send('Home Page')
})

app.get('/v1/users',(req,res) => {
   res.send([{"username":"Putin5"},{"username":"megaTrump"}])
})

app.get('/v1/users/16',(req,res) => {
   res.send({"username":"Putin5"})
})

app.get('/v1/users/16/photos',(req,res) => {
   res.send('Putin5 photos')
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
