struct Vector
{
    int *data;
    unsigned int length;
};


typedef struct Vector Vector;


int getNumberFromUser();


float meanVector(Vector *vec);


int minVector(Vector *vec);


int maxVector(Vector *vec);


int *createVector(unsigned int length, int value);


void printVector(Vector *vec);


int *freeVector(Vector *vec);
