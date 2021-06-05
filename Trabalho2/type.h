
struct BCP{
	unsigned int burst;
	unsigned int ID;
	unsigned int cpu;
	char tipo; //i = I/O bound, c = cpu bound
	char status; /* usar apenas um caractere (n)ovo, (p)ronto, (e)xecução, (b)loqueado, (f)inalizado , (i)nexistente.*/
	unsigned int time_in;
	unsigned int t_interrupt;	
};

typedef struct BCP processo;


struct statistics{
	unsigned int ID ;
	unsigned int t_enter;
	unsigned int t_init;
	unsigned int t_end;
};

typedef struct statistics estatistica;

struct thread_args{
	int Number;
	processo *proc;
	int esc;
};

typedef struct thread_args thread_args;
