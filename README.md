# CatSpeak
CatSpeak is a simple command line utility that prints ASCII cats with your messages.
Like cowsay, but cats.
## Features
- Normal cat
- Sleeping cat
- Dead cat
- Alert cat
- Peeping cat
- Big cat
- Watchful cat
- Resting cat
- Built in help

## Installation

Download the appropriate package for your Linux distribution from the GitHub Releases page:
https://github.com/Luke-F-W/CatSpeak/releases

### Arch Linux
Download the `.pkg.tar.zst` package and install it with:
```bash
sudo pacman -U ./catspeak-1.0.0-1-x86_64.pkg.tar.zst
```

Then run:
```bash
catspeak
```

### Fedora and RPM based distributions

Download the `.rpm` package and install it with:
```bash
sudo dnf install ./catspeak-1.0.0-1.x86_64.rpm
```

Then run:
```bash
catspeak
```

### Ubuntu and Debian

Download the `.deb` package and install it with:
```bash
sudo apt install ./catspeak-1.0.0.deb
```

Then run:
```bash
catspeak
```

## Usage

Running CatSpeak without arguments displays the welcome screen.
```bash
catspeak
```

Display a message with a normal cat.
```bash
catspeak "Hello, world!"
```

## Cat Types

### Normal Cat
```bash
catspeak "Hello!"
```

### Sleeping Cat
```bash
catspeak -s "I'm tired..."
```

### Dead Cat
```bash
catspeak -d "Oh no..."
```

### Alert Cat
```bash
catspeak -a "WARNING!"
```

### Peeping Cat
```bash
catspeak -p "I'm watching you..."
```

### Big Cat
```bash
catspeak -b "MEOW!"
```

### Watchful Cat
```bash
catspeak -w "I see everything."
```

### Resting Cat
```bash
catspeak -r "Zzz..."
```

## Help

To see all available commands:
```bash
catspeak -h
```

## Commands

| Command                 | Description                |
| ----------------------- | -------------------------- |
| `catspeak`                | Display the welcome screen |
| `catspeak "<message>"`    | Display a normal cat       |
| `catspeak -s "<message>"` | Display a sleeping cat     |
| `catspeak -d "<message>"` | Display a dead cat         |
| `catspeak -a "<message>"` | Display an alert cat       |
| `catspeak -p "<message>"` | Display a peeping cat      |
| `catspeak -b "<message>"` | Display a big cat          |
| `catspeak -w "<message>"` | Display a watchful cat     |
| `catspeak -r "<message>"` | Display a resting cat      |
| `catspeak -h`             | Display the help page      |

## Building From Source

CatSpeak is written in C and requires GCC or another compatible C compiler.

Clone the repository:
```bash
git clone https://github.com/Luke-F-W/CatSpeak.git
cd CatSpeak
```

Compile CatSpeak:
```bash
gcc CatSpeak.c -o CatSpeak
```

Run CatSpeak:
```bash
./CatSpeak
```

## Version

Current version: 1.0.0

## ASCII Art Credits
The ASCII art used by CatSpeak comes from:
https://www.asciiart.eu/animals/cats

Individual artists credited by the project include:

- Joan G. Stark (Spunk)
- Felix Lee
- Laura Brown (SheDragon)
- Marcin `StfoReK` Glinski
- Hayley Jane Wakenshaw (Flump)

Run `catspeak -h` to see the credits associated with each cat.

## License
See the `LICENSE` file for license information.
