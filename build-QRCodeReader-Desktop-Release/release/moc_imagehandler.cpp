/****************************************************************************
** Meta object code from reading C++ file 'imagehandler.h'
**
** Created: Sat 7. Dec 01:20:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QZXing_sourceV2.2/imagehandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   14,   13,   13, 0x0a,
     136,  104,   13,   13, 0x2a,
     206,  180,   13,   13, 0x2a,
     261,  243,   13,   13, 0x2a,
     301,  291,   13,   13, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ImageHandler[] = {
    "ImageHandler\0\0item,path,offsetX,offsetY,width,height\0"
    "save(QObject*,QString,double,double,double,double)\0"
    "item,path,offsetX,offsetY,width\0"
    "save(QObject*,QString,double,double,double)\0"
    "item,path,offsetX,offsetY\0"
    "save(QObject*,QString,double,double)\0"
    "item,path,offsetX\0save(QObject*,QString,double)\0"
    "item,path\0save(QObject*,QString)\0"
};

void ImageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageHandler *_t = static_cast<ImageHandler *>(_o);
        switch (_id) {
        case 0: _t->save((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6]))); break;
        case 1: _t->save((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5]))); break;
        case 2: _t->save((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 3: _t->save((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 4: _t->save((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageHandler,
      qt_meta_data_ImageHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageHandler))
        return static_cast<void*>(const_cast< ImageHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
