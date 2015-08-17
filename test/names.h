#define  SLEN 32
struct name_st{
    char * first ;
    char * last ;
};

typedef struct name_st name;
void get(names *);
void show_names(const names *);


