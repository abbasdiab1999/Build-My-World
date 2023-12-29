# Build-My-World
Build my world is a project that spawns a different Models Created in Gazebo:
- Robot Model  in Model Editor.
- Building Model  using Building Editor.
- Model imported from online Gazebo Models Library.
- Display a Welcome Message created with C++.
  
![Build-My-World](https://github.com/abbasdiab1999/Build-My-World/assets/137702684/357faf83-9455-4f9e-b96a-0596f3b5383f)


## Requirments
- Gazebo
- C++
- Cmake
- Git

## Installation
**Source your destination path using:**  ` cd /Your path directory`     
**Clone the Repository with:** ` git clone https://github.com/abbasdiab1999/Build-My-World.git`  

## C++ Plugin
Make sure to include C++ Plugin:  
` <plugin name="Your_Script_Name" filename="lib"Your_Script_Name".so"/>`   
Inside **MyWorld.world File**

## Launch the World file & C++ Plugin:  
**Access World Directory:** ` cd /Your Path Directory /Build-My-World/World `  
**Run World file:** ` gazebo MyWorld `  

## Project Structure
.Build-My-World
  │
  ├── Model
  │   ├── 4WheelRobot
  │   │   ├── model.config
  │   │   └── model.sdf
  │   ├── MyBuilding
  │   │   ├── model.config
  │   │   └── model.sdf
  │   └── README.md
  │
  ├── Script
  │   ├── Welcome.cpp
  │   └── README.md
  │
  ├── World
  │   ├── MyWorld.world
  │   └── README.md
  │
  ├── .gitignore
  ├── LICENSE
  └── README.md

