#include "builtin.hpp"
#include "time.hpp"
#include "os/path.hpp"
#include "os/__init__.hpp"
#include "stat.hpp"
#include "chatlog.hpp"

namespace __chatlog__ {

str *const_0, *const_1, *const_10, *const_11, *const_12, *const_13, *const_14, *const_15, *const_16, *const_17, *const_18, *const_19, *const_2, *const_20, *const_21, *const_22, *const_23, *const_24, *const_25, *const_26, *const_27, *const_28, *const_29, *const_3, *const_30, *const_31, *const_32, *const_4, *const_5, *const_6, *const_7, *const_8, *const_9;


str *__name__, *header1, *header2;



__ss_bool logged(str *a) {
    
    if (__eq(a, const_0)) {
        return True;
    }
    else if (__eq(a, const_1)) {
        return True;
    }
    else if (__eq(a, const_2)) {
        return True;
    }
    else if (__eq(a, const_3)) {
        return True;
    }
    else {
        return False;
    }
    return False;
}

void *write(str *a, str *b) {
    file *fh;

    if (__os__::__path__::isfile(__add_strs(5, const_4, a, const_5, __time__::strftime(const_6), const_7))) {
        fh = open(__add_strs(5, const_4, a, const_5, __time__::strftime(const_6), const_7), const_8);
    }
    else {
        fh = open(__add_strs(5, const_4, a, const_5, __time__::strftime(const_6), const_7), const_8);
        fh->write(((header1)->__add__((const_9)->format()))->__add__(header2));
    }
    fh->write(((b)->__add__((const_10)->format()))->__add__(const_11));
    fh->close();
    return NULL;
}

void *rwrite(str *a, str *b) {
    file *fh;

    fh = open(__add_strs(3, const_4, a, const_12), const_8);
    fh->write((b)->__add__(const_11));
    fh->close();
    return NULL;
}

void *msg(str *a, str *b, str *c) {
    str *msg, *user;

    if (logged(a)) {
        if (__eq(b, const_13)) {
            user = (c->split(const_14, 1))->__getfast__(0);
            msg = (c->split(const_14, 1))->__getfast__(1);
            write(a, (const_15)->format());
        }
        else {
            write(a, (const_16)->format());
        }
    }
    return NULL;
}

void *notice(str *a, str *b, str *c) {
    
    if (logged(a)) {
        write(a, (const_17)->format());
    }
    return NULL;
}

void *join(str *a, str *b) {
    
    if (logged(a)) {
        write(a, (const_18)->format());
    }
    return NULL;
}

void *part(str *a, str *b) {
    
    if (logged(a)) {
        write(a, (const_19)->format());
    }
    return NULL;
}

void *raw(str *a) {
    
    rwrite(const_20, a);
    return NULL;
}

void *kick(str *a, str *b, str *c, str *d) {
    
    if (logged(a)) {
        write(a, (const_21)->format());
    }
    return NULL;
}

void *topic(str *a, str *b, str *c) {
    
    if (logged(a)) {
        write(a, (const_22)->format());
    }
    return NULL;
}

void *action(str *a, str *b, str *c) {
    str *msg, *user;

    if (logged(a)) {
        if (__eq(b, const_13)) {
            user = (c->split(const_14, 1))->__getfast__(0);
            msg = (c->split(const_14, 1))->__getfast__(1);
            write(a, (const_23)->format());
        }
        else {
            write(a, (const_24)->format());
        }
    }
    return NULL;
}

void *mode(str *a, str *b, str *c, str *d, str *e) {
    str *_set;

    if (logged(a)) {
        if (___bool(c)) {
            _set = const_25;
        }
        else {
            _set = const_26;
        }
        if (__eq(e, const_27)) {
            e = a;
        }
        write(a, (const_28)->format());
    }
    return NULL;
}

void __init() {
    const_0 = new str("#tox");
    const_1 = new str("#tox-dev");
    const_2 = new str("#tox-ontopic");
    const_3 = new str("#tox-gsoc-students");
    const_4 = new str("logs/");
    const_5 = __char_cache[95];;
    const_6 = new str("%d%m%y");
    const_7 = new str(".html");
    const_8 = __char_cache[97];;
    const_9 = new str("<h2>{} {}/{}/{}</h2>");
    const_10 = new str("<td><a id=\"{0}\" href=\"#{0}\">{0}</a></td></tr>");
    const_11 = __char_cache[10];;
    const_12 = new str(".txt");
    const_13 = new str("SyncBot");
    const_14 = __char_cache[58];;
    const_15 = new str("<tr><td>Tox/{}</td><td>{}</td>");
    const_16 = new str("<tr><td>{}</td><td>{}</td>");
    const_17 = new str("<tr><td>! {}</td><td>{}</td>");
    const_18 = new str("<tr><td>* {1}</td><td>has joined {0}</td>");
    const_19 = new str("<tr><td>* {1}</td><td>has left {0}</td>");
    const_20 = new str("raw");
    const_21 = new str("<tr><td>* {}</td><td>was kicked by {} ({})</td>");
    const_22 = new str("<tr><td>* {}</td><td>changed the topic to {}</td>");
    const_23 = new str("<tr><td>- Tox/{}</td><td>{}</td>");
    const_24 = new str("<tr><td>- {}</td><td>{}</td>");
    const_25 = __char_cache[43];;
    const_26 = __char_cache[45];;
    const_27 = new str("None");
    const_28 = new str("<tr><td>* {}</td><td>set mode {}{} on {}</td>");
    const_29 = new str("\n<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 3.2 Final//EN\">\n<html>\n <head>\n  <title>Index of /logs/private/html</title>\n </head>\n <body>\n<!DOCTYPE html>\n<html>\n<head>\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n<title>Tox IRC logs</title>\n<style>\n    body {\n        width: auto;\n        margin: 0 auto;\n        font-family: Tahoma, Verdana, Arial, sans-serif;\n    }\n</style>\n<link rel=\"stylesheet\" href=\"//netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css\">\n\n<link rel=\"stylesheet\" href=\"https://apollo.unglinux.org/assets/css/all.min.css\">\n\n<script src=\"//netdna.bootstrapcdn.com/bootstrap/3.1.1/js/bootstrap.min.js\"></script>\n</head>\n\n<body>\n<center>\n<div class=\"container\">\n");
    const_30 = new str("\n<br><br><p>\n<pre>\n<table width=\"100%\">\n  <tr>\n    <th width=\"15%\">Name</th>\n    <th>Message</th>\n    <th width=\"15%\">Time</th>\n  </tr>\n");
    const_31 = new str("__main__");
    const_32 = new str("");

    __name__ = new str("chatlog");

    header1 = const_29;
    header2 = const_30;
    if (__eq(__name__, const_31)) {
        mode(const_32, const_32, const_32, const_32, const_32);
        action(const_32, const_32, const_32);
        topic(const_32, const_32, const_32);
        kick(const_32, const_32, const_32, const_32);
        raw(const_32);
        part(const_32, const_32);
        join(const_32, const_32);
        notice(const_32, const_32, const_32);
        msg(const_32, const_32, const_32);
        write(const_32, const_32);
    }
}

} // module namespace

/* extension module glue */

extern "C" {
#include <Python.h>
#include "time.hpp"
#include "os/path.hpp"
#include "os/__init__.hpp"
#include "stat.hpp"
#include "chatlog.hpp"
#include <structmember.h>
#include "time.hpp"
#include "os/path.hpp"
#include "os/__init__.hpp"
#include "stat.hpp"
#include "chatlog.hpp"

PyObject *__ss_mod_chatlog;

namespace __chatlog__ { /* XXX */
PyObject *Global_chatlog_topic(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);

        return __to_py(__chatlog__::topic(arg_0, arg_1, arg_2));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_notice(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);

        return __to_py(__chatlog__::notice(arg_0, arg_1, arg_2));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_join(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);

        return __to_py(__chatlog__::join(arg_0, arg_1));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_logged(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);

        return __to_py(__chatlog__::logged(arg_0));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_rwrite(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);

        return __to_py(__chatlog__::rwrite(arg_0, arg_1));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_write(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);

        return __to_py(__chatlog__::write(arg_0, arg_1));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_raw(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);

        return __to_py(__chatlog__::raw(arg_0));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_part(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);

        return __to_py(__chatlog__::part(arg_0, arg_1));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_mode(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);
        str *arg_3 = __ss_arg<str *>("d", 3, 0, 0, args, kwargs);
        str *arg_4 = __ss_arg<str *>("e", 4, 0, 0, args, kwargs);

        return __to_py(__chatlog__::mode(arg_0, arg_1, arg_2, arg_3, arg_4));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_msg(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);

        return __to_py(__chatlog__::msg(arg_0, arg_1, arg_2));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_action(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);

        return __to_py(__chatlog__::action(arg_0, arg_1, arg_2));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

PyObject *Global_chatlog_kick(PyObject *self, PyObject *args, PyObject *kwargs) {
    try {
        str *arg_0 = __ss_arg<str *>("a", 0, 0, 0, args, kwargs);
        str *arg_1 = __ss_arg<str *>("b", 1, 0, 0, args, kwargs);
        str *arg_2 = __ss_arg<str *>("c", 2, 0, 0, args, kwargs);
        str *arg_3 = __ss_arg<str *>("d", 3, 0, 0, args, kwargs);

        return __to_py(__chatlog__::kick(arg_0, arg_1, arg_2, arg_3));

    } catch (Exception *e) {
        PyErr_SetString(__to_py(e), ((e->message)?(e->message->unit.c_str()):""));
        return 0;
    }
}

static PyNumberMethods Global_chatlog_as_number = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static PyMethodDef Global_chatlogMethods[] = {
    {(char *)"__newobj__", (PyCFunction)__ss__newobj__, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"topic", (PyCFunction)Global_chatlog_topic, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"notice", (PyCFunction)Global_chatlog_notice, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"join", (PyCFunction)Global_chatlog_join, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"logged", (PyCFunction)Global_chatlog_logged, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"rwrite", (PyCFunction)Global_chatlog_rwrite, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"write", (PyCFunction)Global_chatlog_write, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"raw", (PyCFunction)Global_chatlog_raw, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"part", (PyCFunction)Global_chatlog_part, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"mode", (PyCFunction)Global_chatlog_mode, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"msg", (PyCFunction)Global_chatlog_msg, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"action", (PyCFunction)Global_chatlog_action, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {(char *)"kick", (PyCFunction)Global_chatlog_kick, METH_VARARGS | METH_KEYWORDS, (char *)""},
    {NULL}
};

PyMODINIT_FUNC initchatlog(void) {
    __shedskin__::__init();
    __time__::__init();
    __stat__::__init();
    __os__::__path__::__init();
    __os__::__init();
    __chatlog__::__init();

    __ss_mod_chatlog = Py_InitModule((char *)"chatlog", Global_chatlogMethods);
    if(!__ss_mod_chatlog)
        return;


    addchatlog();

}

PyMODINIT_FUNC addchatlog(void) {
    PyModule_AddObject(__ss_mod_chatlog, (char *)"header2", __to_py(__chatlog__::header2));
    PyModule_AddObject(__ss_mod_chatlog, (char *)"header1", __to_py(__chatlog__::header1));

}

} // namespace __chatlog__

} // extern "C"
int main(int, char **) {
    __shedskin__::__init();
    __time__::__init();
    __stat__::__init();
    __os__::__path__::__init();
    __os__::__init();
    __shedskin__::__start(__chatlog__::__init);
}
