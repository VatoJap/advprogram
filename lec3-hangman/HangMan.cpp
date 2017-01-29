#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void test_chooseWord();

int generateRandomNumber(int min, int max)
{
    return rand() % (max-min) + min;
}

string chooseWord()
{
    string wordList[] = {
        "angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame",
        "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house",
        "island", "jewel",
        "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun",
        "table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth",
        "town", "train", "tray", "tree", "trousers",
        "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
    };
    const int NUMBER_OF_WORDS = sizeof(wordList) / sizeof(string);
    return wordList[generateRandomNumber(0, NUMBER_OF_WORDS)];
}

string getDrawing(int incorrectGuess)
{
    string figure[] = {
        "fig1", "fig2", "fig3", "fig4", "fig5", "fig6", "fig7", "fig8"
    };
    const int NUMBER_OF_FIGURES = sizeof(figure) / sizeof(string);
    return figure[incorrectGuess % NUMBER_OF_FIGURES];
}

int main()
{
    for (int incorrectGuess = 0; incorrectGuess < 8; incorrectGuess++)
        cout << getDrawing(incorrectGuess) << endl;
    return 0;
}

void test_chooseWord()
{
    cout << "chooseWord() returns: " << chooseWord() << endl;
}
