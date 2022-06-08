const express = require('express')
const app = express()
const port = 3000

app.use(express.static('dist'))

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`)
})

const WebSocket = require('ws')
 
const wss = new WebSocket.Server({ port: 8081 })
 
wss.on('connection', ws => {
    ws.on('message', message => {
	const payload = JSON.parse(message)
	console.log("Received: ", payload)
  })
  ws.send('Hello! Message From Server!!')
})
