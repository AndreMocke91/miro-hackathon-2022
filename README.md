### Overview
A VR Client for Miro, short and sweet.

All the previous attempts had the same limitation: Content creation is a nightmare with controllers, point point, typey typey, cry yourself to sleep.

The imagined state:
Create with your hands and voice.

The aim is to use the handtracking that the Oculus Quest 2 provides, combined with voice transcription for content.

- We will not embed a Miro board, we will create a new client

### Functional Requirements

- Render hardcoded board
- Use hands to navigate the board
- Widget Palette on one arm with notes, shapes cards, ability to change color
- Can pick up item from Widget Pallet, and place on board
- Can pick up widget from board to update
- When widget is held in front of mouth, the user can say what content it should have

### Chunks of work
#### Hand tracking
This is pretty experimental and not a lot of documentation exists.

Oculus + Unreal
https://developer.oculus.com/documentation/unreal/unreal-hand-tracking/

We will need to agree on a method of navigation, like pinch and move, or grab and move.

##### Proposed solution:
- One hand grab to pan
- Two hand grab to zoom
- Pinch to pick up item, release to drop

#### Board
I initially imagined a board that you can walk around on, but realistically that will cause angry neck pains, since all the content will be at your feet.

Then tried to imagine a Tony Stark like hologram solution, but can't imagine how we can take Miro 3D and make it useful.

##### Proposed solution
Similar to a real whiteboard, but infinite: you can scroll and zoom like on a Miro board.
I imagined it small enough so that a person does not have to move around to reach all the corners of the board with extended arms, perhaps we can include some movement?

##### Widget Palette
Contains all the widgets a user can create. 

Now I can't decide between making it persistent on the bottom board for instance or adding it to the users' arms, the latter might be more novel.

Perhaps we can activate it on a certain gesture.

#### Voice transcription
I have no idea how to capture audio with Unreal or Unity, but if we can get it into a known format, I have a go service that works with the Google Language API's to transcribe it.

#### Websockets
Ideally we would tap into the monoliths websocket channels, but I'm woefully clueless about the authentication, format and encoding it expects.

