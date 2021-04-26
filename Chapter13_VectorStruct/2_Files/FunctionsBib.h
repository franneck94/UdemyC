/**********************/
/* DEFINES AND TYPES  */
/**********************/
struct Vector
{
    float *data;
    unsigned int length;
};


typedef struct Vector Vector;


/**********************/
/*  HELPER FUNCTIONS  */
/**********************/
int getNumberFromUser();


Vector *createVector(unsigned int length, int value);


void printVector(Vector *vec);


void freeVector(Vector *vec);


/**********************/
/*  I/O FUNCTIONS     */
/**********************/

int readInVectorData(Vector *vec, const char *filepath);


int writeOutVectorData(Vector *vec, const char *filepath);


/**********************/
/*  MATH. FUNCTIONS   */
/**********************/
Vector *addVectors(Vector *vec1, Vector *vec2);


Vector *subVectors(Vector *vec1, Vector *vec2);


float multiplyVectors(Vector *vec1, Vector *vec2);


Vector *multiplyScalar(Vector *vec, float scalar);


Vector *divideScalar(Vector *vec, float scalar);


float meanVector(Vector *vec);


int minVector(Vector *vec);


int maxVector(Vector *vec);

