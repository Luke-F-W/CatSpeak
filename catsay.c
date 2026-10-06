#include <stdio.h>
#include <string.h>

// catsay -h | h for help, for help with catsay
void help(){
    printf("----------------------------\n");
    printf("  ____      _                   \n");
    printf(" / ___|__ _| |_ ___  __ _ _   _ \n");
    printf("| |   / _` | __/ __|/ _` | | | |\n");
    printf("| |__| (_| | |_\\__ \\ (_| | |_| |\n");
    printf(" \\____\\__,_|\\__|___/\\__,_|\\__, |\n");
    printf("                          |___/ \n");
    printf("----------------------------\n");

    printf("all ascii art sourced from https://www.asciiart.eu/animals/cats\n");
    printf("catsay version: 1.0.0\n");

    printf("------\n");
    printf("catsay\n");
    printf("This will print the welcome page for catsay, ascii art also used for errors.\n");
    printf("Artist: Unknown.\n");

    printf("------\n");
    printf("catsay \"<String>\"\n");
    printf("This will print a normal cat, and display the string passed to it.\n");
    printf("Artist: Joan G. Stark (Spunk).\n");

    printf("------\n");
    printf("catsay -s \"<String>\"\n");
    printf("This will print a sleeping cat, and display the string passed to it.\n");
    printf("Artist: Felix Lee.\n");

    printf("------\n");
    printf("catsay -d \"<String>\"\n");
    printf("This will print a dead cat, and display the string passed to it.\n");
    printf("Artist: Joan G. Stark (Spunk).\n");

    printf("------\n");
    printf("catsay -a \"<String>\"\n");
    printf("This will print an alert cat, and display the string passed to it.\n");
    printf("Artist: Unknown.\n");

    printf("------\n");
    printf("catsay -p \"<String>\"\n");
    printf("This will print a peeping cat, and display the string passed to it.\n");
    printf("Artist: Unknown.\n");

    printf("------\n");
    printf("catsay -b \"<String>\"\n");
    printf("This will print a big cat, and display the string passed to it.\n");
    printf("Artist: Laura Brown (SheDragon).\n");

    printf("------\n");
    printf("catsay -w \"<String>\"\n");
    printf("This will print a watchful cat, and display the string passed to it.\n");
    printf("Artist: Marcin `StfoReK` Glinski.\n");

    printf("------\n");
    printf("catsay -r \"<String>\"\n");
    printf("This will print a resting cat, and display the string passed to it.\n");
    printf("Artist: Hayley Jane Wakenshaw (Flump).\n");

    printf("------\n");
    printf("catsay -h\n");
    printf("This will display the many cool catsay commands.\n");
}

// catsay "<String>" | normal silly cat
void catsayNormal(const char *message){
    printf("----------------------------\n");
    printf("----\n");
    printf("%s\n", message);
    printf("----\n");
    printf("   \\\n");
    printf("    \\\n");
    printf("      ,_     _,\n");
    printf("      |\\\\___//|\n");
    printf("      |=O   O=|\n");
    printf("      \\=._Y_.=/\n");
    printf("       )  `  (    ,\n");
    printf("      /       \\  ((\n");
    printf("      |       |   ))\n");
    printf("     /| |   | |\\_//\n");
    printf("     \\| |._.| |/-`\n");
    printf("      '\"'   '\"'\n");
    printf("----------------------------\n");
}

// catsay -d "<String>" | d for dead
void catsayDead(const char *message){
    printf("----------------------------\n");
    printf("----\n");
    printf("%s\n", message);
    printf("----\n");
    printf("   \\\n");
    printf("    \\\n");
    printf("      ,_     _,\n");
    printf("      |\\\\___//|\n");
    printf("      |=X   X=|\n");
    printf("      \\=._Y_.=/\n");
    printf("       )  `U (    ,\n");
    printf("      /       \\  ((\n");
    printf("      |       |   ))\n");
    printf("     /| |   | |\\_//\n");
    printf("     \\| |._.| |/-`\n");
    printf("      '\"'   '\"'\n");
    printf("----------------------------\n");
}

// catsay -a "<String>" | a for alert
void catsayAlert(const char *message){
    printf("----------------------------\n");
    printf("            ------\n");
    printf("            %s\n", message);
    printf("            ------\n");
    printf("               \\\n");
    printf("                \\\n");
    printf(" _._     _,-'""`-._\n");
    printf("(,-.`._,'(       |\\`-/|\n");
    printf("    `-.-' \\ )-`( , o o)\n");
    printf("          `-    \\`_`\"'-\n");
    printf("----------------------------\n");
}

// catsay -s "<String>" | s for sleepy
void catsaySleepy(const char *message){
    printf("----------------------------\n");
    printf("----\n");
    printf("%s\n", message);
    printf("----\n");
    printf("   \\\n");
    printf("    \\\n");
    printf("      |\\      _,,,---,,_\n");
    printf("      /,`.-'`'    -.  ;-;;,_\n");
    printf("     |,3-  ) )-,_. ,\\ (  `'-'\n");
    printf("    '---''(_/--'  `-'\\_) \n");
    printf("----------------------------\n");
}

// catsay -p "<String>" | p for peeping
void catsayPeeping(const char *message){
    printf("----------------------------\n");
    printf("    ----\n");
    printf("    %s\n", message);
    printf("    ----\n");
    printf("     \\\n");
    printf("      \\\n");
    printf("    |\\__/,|   (`\\\n");
    printf("  _.|o o  |_   ) )\n");
    printf("-(((---(((--------\n");
    printf("----------------------------\n");

}

// catsay -b "<String>" | b for big
void catsayBigCat(const char *message){
    printf("----------------------------\n");
    printf("    ----\n");
    printf("    %s\n", message);
    printf("    ----\n");
    printf("       \\\n");
    printf("        \\\n");
    printf("      /';;:;;'\\\n");
    printf("    (:;/\\,-,/\\;;)\n");
    printf("   (:;{  d b  }:;)\n");
    printf("    (:;\\__Y__/;;)-----------,,_\n");
    printf("     ,..\\  ,..\\      ___/___)__`\\\n");
    printf("    (,,,)~(,,,)`-._##____________)\n");
    printf("----------------------------\n");
}

// catsay -w "<String>" | w for watchful
void catsayWatchful(const char *message){
    printf("----------------------------\n");
    printf("   --------\n");
    printf("    %s\n", message);
    printf("   --------\n");
    printf("       \\\n");
    printf("        \\\n");
    printf("        ,-``````-.\n");
    printf("     /\\j__/\\  (  \\`--.\n");
    printf("     \\`@_@'/  _)  >--.`.\n");
    printf("    _{.:Y:_}_{{_,'    ) )\n");
    printf("   {_}`-^{_} ```     (_/\n");
    printf("----------------------------\n");
}

// catsay -r "<String>" | r for resting
void catsayResting(const char *message){
    printf("----------------------------\n");
    printf("----\n");
    printf("%s\n", message);
    printf("----\n");
    printf(" \\\n");
    printf("  \\\n");
    printf("  |\\'/\\-..--.\n");
    printf(" / _ _   ,  ;\n");
    printf("`~=`Y'~_<._./\n");
    printf(" <`-....__.'  \n");
    printf("----------------------------\n");
}

// runs whenever user acts silly
void error(){
    printf("----------------------------\n");
    printf("----\n");
    printf("Error: you may of entered too many, too little or mistyped an argument.\n");
    printf("See `catsay -h` for help\n");
    printf("----\n");
    printf("  \\\n");
    printf("   \\\n");
    printf(" |\\_---_/|\n");
    printf("/   o_o   \\\n");
    printf("|    U    |\n");
    printf("\\  ._I_.  /\n");
    printf(" `-_____-'\n");
    printf("----------------------------\n");
}

void welcome(){
    printf("----------------------------\n");
    printf("  ____      _                   \n");
    printf(" / ___|__ _| |_ ___  __ _ _   _ \n");
    printf("| |   / _` | __/ __|/ _` | | | |\n");
    printf("| |__| (_| | |_\\__ \\ (_| | |_| |\n");
    printf(" \\____\\__,_|\\__|___/\\__,_|\\__, |\n");
    printf("                          |___/ \n");
    printf("----\n");
    printf("Welcome to catsay!\n");
    printf("See `catsay -h` for help\n");
    printf("----\n");
    printf("  \\\n");
    printf("   \\\n");
    printf(" |\\_---_/|\n");
    printf("/   o_o   \\\n");
    printf("|    U    |\n");
    printf("\\  ._I_.  /\n");
    printf(" `-_____-'\n");
    printf("----------------------------\n");
}


int main(int argc, char *argv[]) // argc says how many args were provided
{
    // catches bad input from silly users
    if (argc < 2){
        welcome();
        return 0;
    }
    else if (argc > 3){
        error();
        return 0;
    }


    // main if statement for commands, engine of catsay
    if (strcmp(argv[1], "-h") == 0){ // c has weird syntax, but okay, if arg1 is -h then its somehow equal to 0
        help(); 
    }
    else if (strcmp(argv[1], "-a") == 0){ //alert, if the 1st arg is -a
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayAlert(argv[2]);
    }
    else if (strcmp(argv[1], "-d") == 0){ //dead, if the 1st arg is -d
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayDead(argv[2]);
    }
    else if (strcmp(argv[1], "-s") == 0){ //sleepy, if the 1st arg is -s
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsaySleepy(argv[2]);
    }
    else if (strcmp(argv[1], "-p") == 0){ //peeping, if the 1st arg is -p
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayPeeping(argv[2]);
    }
    else if (strcmp(argv[1], "-b") == 0){ //big cat, if the 1st arg is -b
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayBigCat(argv[2]);
    }
    else if (strcmp(argv[1], "-w") == 0){ //watchful, if the 1st arg is -w
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayWatchful(argv[2]);
    }
    else if (strcmp(argv[1], "-r") == 0){ //resting, if the 1st arg is -r
        if (argv[2] == NULL){
            error();
            return 0;
        }
        catsayResting(argv[2]);
    }
    else if (argc == 2){
        catsayNormal(argv[1]);
    }
    else{
        error();
    }

    return 0;
}
