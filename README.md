<u>Supported o3de versions</u> : **23.10**

# Third Person Template

![gameplay](doc/gameplay.gif?raw=true)

The Third Person Template Project is a simple foundation project to help users learn about fundamental O3DE concepts and features. Utilizing core components of the engine, users are able to take a rigged character model with animations and use it within a game context. In addition, with a standard O3DE Gem, users can create a simple follow camera system.

## Prerequisites

You need to build or [install O3DE engine](https://o3de.org/download/).

You need to [install git with lfs support](https://git-scm.com/downloads), and [setup a token on your github account](https://www.docs.o3de.org/docs/welcome-guide/setup/setup-from-github/#configure-credentials-for-git-lfs). Needed as the repository uses Git LFS, the "Download ZIP" button will not download assets.

## How to run

1. Clone the github repository (`git clone https://github.com/o3de/ThirdPersonTemplate.git`). When prompted to authenticate, use your github username and the token as password.
2. Launch O3DE. It will open the Project manager. Click on the **New Project** button then **Open Existing Project** option.
3. Navigate to your download (and make sure it is unzipped). Open this folder. The project should now be registered.

![project](doc/cover.png?raw=true)

4. Click on the **Build Project** button, located on the **Third Person Template** image.
5. Once the project has been built successfully, use the **Open Editor** button.
6. The asset pre-processor will run for a bit. Once it is over you will be welcomed with the **Open a Level** window, simply pick the first one.

## Project Highlights

- **Camera Framework Gem for Camera Rig Functionality**, reusable camera gem in action.
- **PhysX Rigidbody**, physX setup with character colliding with the environment.

### Screenshots

![screenshot](doc/screenshot-1.png?raw=true)

## License

For terms please see the LICENSE*.TXT files within this distribution.
