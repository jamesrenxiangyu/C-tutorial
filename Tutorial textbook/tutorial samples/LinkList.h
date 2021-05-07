/* header file */

struct POINT;
typedef struct POINT *PPOINT;

PPOINT PtCreate(int x, int y);
void PtDestroy(PPOINT point);
void PtGetvalue(POINT point, int *x, int *y);
void PtSetvalue(PPOINT point, int x, int y);
bool PtComp(PPOINT point1, PPOINT point2);
char *Pt2String(PPOINT point);
void PtPrint(PPOINT point);

