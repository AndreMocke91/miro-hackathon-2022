async function init() {
  const ws = new WebSocket("ws://localhost:8081");
  ws.addEventListener("open", () =>{
    console.log("We are connected");
    const payload = JSON.stringify({ message: "How are you?" })
    ws.send(payload);
  });
 
  ws.addEventListener('message', function (event) {
    console.log(event.data);
  });

  miro.board.ui.on('item:create', async (event) => {
      console.log(event.item)
      const payload = JSON.stringify({ item_created: event.item })
      ws.send(payload)
  });
  miro.board.ui.on('item:transform', async (event) => {
      console.log(event.items[0])
      const payload = JSON.stringify({ item_transformed: event.items })
      ws.send(payload)
  });
}

init();
