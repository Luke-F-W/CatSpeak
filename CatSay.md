# CatSay
CatSay is a simple command line utility that prints ASCII cats with your messages.
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
https://github.com/Luke-F-W/CatSay/releases

### Arch Linux
Download the `.pkg.tar.zst` package and install it with:
```bash
sudo pacman -U ./catsay-1.0.0-1-x86_64.pkg.tar.zst
```

Then run:
```bash
catsay
```

### Fedora and RPM based distributions

Download the `.rpm` package and install it with:
```bash
sudo dnf install ./catsay-1.0.0-1.x86_64.rpm
```

Then run:
```bash
catsay
```

### Ubuntu and Debian

Download the `.deb` package and install it with:
```bash
sudo apt install ./catsay-1.0.0.deb
```

Then run:
```bash
catsay
```

## Usage

Running CatSay without arguments displays the welcome screen.
```bash
catsay
```

Display a message with a normal cat.
```bash
catsay "Hello, world!"
```

## Cat Types

### Normal Cat
```bash
catsay "Hello!"
```

### Sleeping Cat
```bash
catsay -s "I'm tired..."
```

### Dead Cat
```bash
catsay -d "Oh no..."
```

### Alert Cat
```bash
catsay -a "WARNING!"
```

### Peeping Cat
```bash
catsay -p "I'm watching you..."
```

### Big Cat
```bash
catsay -b "MEOW!"
```

### Watchful Cat
```bash
catsay -w "I see everything."
```

### Resting Cat
```bash
catsay -r "Zzz..."
```

## Help

To see all available commands:
```bash
catsay -h
```

## Commands

| Command                 | Description                |
| ----------------------- | -------------------------- |
| `catsay`                | Display the welcome screen |
| `catsay "<message>"`    | Display a normal cat       |
| `catsay -s "<message>"` | Display a sleeping cat     |
| `catsay -d "<message>"` | Display a dead cat         |
| `catsay -a "<message>"` | Display an alert cat       |
| `catsay -p "<message>"` | Display a peeping cat      |
| `catsay -b "<message>"` | Display a big cat          |
| `catsay -w "<message>"` | Display a watchful cat     |
| `catsay -r "<message>"` | Display a resting cat      |
| `catsay -h`             | Display the help page      |

## Building From Source

CatSay is written in C and requires GCC or another compatible C compiler.

Clone the repository:
```bash
git clone https://github.com/Luke-F-W/CatSay.git
cd CatSay
```

Compile CatSay:
```bash
gcc catsay.c -o catsay
```

Run CatSay:
```bash
./catsay
```

## Version

Current version: 1.0.0

## ASCII Art Credits
The ASCII art used by CatSay comes from:
https://www.asciiart.eu/animals/cats

Individual artists credited by the project include:

- Joan G. Stark (Spunk)
- Felix Lee
- Laura Brown (SheDragon)
- Marcin `StfoReK` Glinski
- Hayley Jane Wakenshaw (Flump)

Run `catsay -h` to see the credits associated with each cat.

## License
See the `LICENSE` file for license information.