/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Fri Jun 29 11:34:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CoolView/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      27,    7,    7,    7, 0x08,
      45,    7,    7,    7, 0x08,
      63,    7,    7,    7, 0x08,
      83,    7,    7,    7, 0x08,
     108,    7,    7,    7, 0x08,
     134,    7,    7,    7, 0x08,
     155,    7,    7,    7, 0x08,
     176,    7,    7,    7, 0x08,
     199,    7,    7,    7, 0x08,
     219,    7,    7,    7, 0x08,
     243,    7,    7,    7, 0x08,
     273,  267,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0on_input_clicked()\0on_edit_clicked()\0"
    "on_view_clicked()\0on_output_clicked()\0"
    "on_input_photo_clicked()\0"
    "on_delete_photo_clicked()\0"
    "on_savekml_clicked()\0on_openkml_clicked()\0"
    "on_outputkml_clicked()\0on_search_clicked()\0"
    "on_timeinview_clicked()\0on_nameinview_clicked()\0"
    "index\0on_tabWidget_currentChanged(int)\0"
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->on_input_clicked(); break;
        case 1: _t->on_edit_clicked(); break;
        case 2: _t->on_view_clicked(); break;
        case 3: _t->on_output_clicked(); break;
        case 4: _t->on_input_photo_clicked(); break;
        case 5: _t->on_delete_photo_clicked(); break;
        case 6: _t->on_savekml_clicked(); break;
        case 7: _t->on_openkml_clicked(); break;
        case 8: _t->on_outputkml_clicked(); break;
        case 9: _t->on_search_clicked(); break;
        case 10: _t->on_timeinview_clicked(); break;
        case 11: _t->on_nameinview_clicked(); break;
        case 12: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
