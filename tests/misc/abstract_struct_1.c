/* run.config
   STDOPT: +"tests/misc/abstract_struct_2.c" +"-lib-entry"
*/

struct abstracttype;
struct something {
  struct abstracttype *data;
};
static struct something *repositories;

void main(void) {
  repositories = calloc(1, sizeof(struct something));
}