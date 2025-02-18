#include <iostream>

void fillTweets(char tweet[1001], char tweets[4][281], unsigned short int end, unsigned short int index, unsigned short int start) { 
    int j = 0;
    for (int i = start; i < end; ++i) { 
        tweets[index][j] = tweet[i];
        ++j;
    }
    tweets[index][j + 1] = '\0';
}

unsigned short int generateTraichoTweet(char tweet[1001], char tweets[4][281], unsigned short int size) {
    unsigned short int length = 0;
    unsigned short int wordStart = 0;
    unsigned short int wordEnd = 0;
    unsigned short int paragraphStartIndex = 0;
    unsigned short int insertIndex = 0;
    for (int i = 0; i < size; ++i) { 

        if (i == 0 || tweet[i - 1] != ' ') { 
            wordStart = i;
        }
        
        if (tweet[i + 1] == ' ' || tweet[i + 1] ==  '\0') { 
            wordEnd = i + 1;
        }
            if (size >= 280 && i != 0 && i % 280 == 0) { 
                fillTweets(tweet, tweets, wordEnd, insertIndex, paragraphStartIndex);
                paragraphStartIndex = wordEnd;
                ++insertIndex;
            } else if (i == size - 1) { 
                fillTweets(tweet, tweets, wordStart + 1, insertIndex, paragraphStartIndex + 1);
                paragraphStartIndex = wordEnd;
                ++insertIndex;
                break;
            }
    }
    return insertIndex;
}

void printTraichoTweet(char tweets[4][281], unsigned short int numberOfTweets) { 
    const char tweet[18] = "Traicho tweeted: ";
    const char thread[38] = "--------------------Traicho tweeted: ";

    for (int i = 0; i < numberOfTweets; ++i) { 
        if (i > 0) { 
            std::cout << thread << tweets[i];
        } else { 
            std::cout << tweet << tweets[i];
        }
        std::cout << '\n';
    }
}

unsigned short int getSize(char tweet[1001]) { 
    for (int i = 0; i < 1001; ++i) { 
        if (tweet[i] == '\0') { 
            return i;
        } 
    }
    return 0;
}

int main() {
    char tweet[1001];

    char tweets[4][281] = {};
    std::cin.getline(tweet, 1000);
    tweet[1000] = '\0';

    unsigned short int tweetSize = getSize(tweet);
    tweet[tweetSize + 1] = '\0';
    unsigned short int numberOfTweets = generateTraichoTweet(tweet, tweets, tweetSize);
    printTraichoTweet(tweets, numberOfTweets);

    return 0;
}