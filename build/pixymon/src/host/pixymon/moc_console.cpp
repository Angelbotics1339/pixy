/****************************************************************************
** Meta object code from reading C++ file 'console.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "console.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'console.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      42,   38,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   62,   14,   14, 0x0a,
     100,   95,   14,   14, 0x2a,
     115,   95,   14,   14, 0x0a,
     132,   95,   14,   14, 0x0a,
     147,   95,   14,   14, 0x0a,
     163,   14,   14,   14, 0x0a,
     172,   95,   14,   14, 0x0a,
     193,  186,   14,   14, 0x0a,
     211,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleWidget[] = {
    "ConsoleWidget\0\0line\0textLine(QString)\0"
    "key\0controlKey(Qt::Key)\0text,color\0"
    "print(QString,QColor)\0text\0print(QString)\0"
    "command(QString)\0error(QString)\0"
    "prompt(QString)\0prompt()\0type(QString)\0"
    "accept\0acceptInput(bool)\0handleTimer()\0"
};

void ConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConsoleWidget *_t = static_cast<ConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->textLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->controlKey((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 2: _t->print((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->command((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->prompt((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->prompt(); break;
        case 8: _t->type((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->acceptInput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->handleTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConsoleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConsoleWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_ConsoleWidget,
      qt_meta_data_ConsoleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget))
        return static_cast<void*>(const_cast< ConsoleWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ConsoleWidget::textLine(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConsoleWidget::controlKey(Qt::Key _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
