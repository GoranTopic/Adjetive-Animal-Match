# The Adjective and Animal Match

## About
Do you have a “*healthy*” obsession with matching adjectives and animal name?
Do you get sweet pleasure in your body when they start with same letters:
Does the sound of:

>  "*Altruistic – Alligator*",
  
or 

> "*Chimeric – Chimpanzee*"
 
Galvanizes you to the very core? 

**Then this program is for you!**

With matches such as: 
 >"*Cheerful - Cheetah*",
 "*Hippy  - Hippopotamus*",
 "*Honest  - Honey bee*",
 "*Troublesome  - Trout*",
 "*Ostentatious  - Ostrich*",
 "*Pandemic  - Panda*",
 "*Molecular  - Mole*",
 "*Goofy  - Goose*",
 "*Flaming  - Flamingo*",
 "*Centennial  - Centipede*",
 "*Paradoxical - Parrot*",
 “*Chilled - Chinchilla*”,
 “*Caribbean  - Caribou*”,
 “*Buzzardly - Buzzard*”,
“*Corny  - Corncrake*”,
“*Crooked - Crocodile*”,
“*Dingy - Dingo*”,
“*Earthbound - Earthworm*”,
“*Fishy - Fish*”,
“*Galactic  - Galapagos penguin*”,

Written tin C++, it takes a list of adjectives I surreptitiously found on the internet and a list of Animals I stole. It combines them to make a new list of Adjectives and Animals with matching starts. The number of letters it must match can be changed from 6 to 2 to 1.

The generated list of matches can be found in the file **adj-aniamls.txt**
The full dictionary can be found at the directory **Dictionary in csv**
A list of my favorite combinations can be found at **fav.txt**

Enjoy ^^

## How to use

To run the program just execute the Compiled program name **program**
Such as: `./program`
It will automatically look of file "adjectives.txt" and "adjectives.txt" and write to standard output.
From there you can do `./program > adj-animal.txt` to save the list.

To compile the code you can run
`g++ main.ccp -o program` 

The main code can be found at **main.ccp**
You can change the number of needed letter to make a match by changing the value of Chars_num in the code:
	`int chars_num = 4;`
    	or
	`int chars_num = 3;`
