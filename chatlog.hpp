#ifndef __CHATLOG_HPP
#define __CHATLOG_HPP

using namespace __shedskin__;
namespace __chatlog__ {

extern str *const_0, *const_1, *const_10, *const_11, *const_12, *const_13, *const_14, *const_15, *const_16, *const_17, *const_18, *const_19, *const_2, *const_20, *const_21, *const_22, *const_23, *const_24, *const_25, *const_26, *const_27, *const_28, *const_29, *const_3, *const_30, *const_31, *const_32, *const_4, *const_5, *const_6, *const_7, *const_8, *const_9;



extern str *__name__, *header1, *header2;


__ss_bool logged(str *a);
void *write(str *a, str *b);
void *rwrite(str *a, str *b);
void *msg(str *a, str *b, str *c);
void *notice(str *a, str *b, str *c);
void *join(str *a, str *b);
void *part(str *a, str *b);
void *raw(str *a);
void *kick(str *a, str *b, str *c, str *d);
void *topic(str *a, str *b, str *c);
void *action(str *a, str *b, str *c);
void *mode(str *a, str *b, str *c, str *d, str *e);

extern "C" {
PyMODINIT_FUNC initchatlog(void);

PyMODINIT_FUNC addchatlog(void);

}
} // module namespace
namespace __shedskin__ { /* XXX */

}
#endif
