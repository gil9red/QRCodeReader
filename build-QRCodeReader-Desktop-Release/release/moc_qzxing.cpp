/****************************************************************************
** Meta object code from reading C++ file 'qzxing.h'
**
** Created: Sat 7. Dec 01:20:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QZXing_sourceV2.2/qzxing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qzxing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QZXing[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       2,  119, // properties
       1,  127, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      36,   26,    7,    7, 0x05,
      63,   59,    7,    7, 0x05,
      81,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,  113,  105,    7, 0x0a,
     217,  192,  105,    7, 0x2a,
     260,  245,  105,    7, 0x2a,
     290,  284,  105,    7, 0x2a,
     364,  310,  105,    7, 0x0a,
     439,  406,  105,    7, 0x2a,
     499,  476,  105,    7, 0x2a,
     546,  532,  105,    7, 0x2a,
     580,  575,  105,    7, 0x0a,
     639,  605,  105,    7, 0x0a,
     722,  695,  105,    7, 0x2a,
     792,  771,  105,    7, 0x2a,
     847,  834,  105,    7, 0x2a,
     882,  575,  105,    7, 0x2a,
     914,    7,  910,    7, 0x0a,
     950,    7,  945,    7, 0x0a,
     975,  970,    7,    7, 0x0a,

 // properties: name, type, flags
     992,  910, 0x02095001,
    1007,  945, 0x03495003,

 // properties: notify_signal_id
       0,
       3,

 // enums: name, flags, count, data
    1023, 0x0,   18,  131,

 // enum data: key, value
    1037, uint(QZXing::DecoderFormat_None),
    1056, uint(QZXing::DecoderFormat_Aztec),
    1076, uint(QZXing::DecoderFormat_CODABAR),
    1098, uint(QZXing::DecoderFormat_CODE_39),
    1120, uint(QZXing::DecoderFormat_CODE_93),
    1142, uint(QZXing::DecoderFormat_CODE_128),
    1165, uint(QZXing::DecoderFormat_DATA_MATRIX),
    1191, uint(QZXing::DecoderFormat_EAN_8),
    1211, uint(QZXing::DecoderFormat_EAN_13),
    1232, uint(QZXing::DecoderFormat_ITF),
    1250, uint(QZXing::DecoderFormat_MAXICODE),
    1273, uint(QZXing::DecoderFormat_PDF_417),
    1295, uint(QZXing::DecoderFormat_QR_CODE),
    1317, uint(QZXing::DecoderFormat_RSS_14),
    1338, uint(QZXing::DecoderFormat_RSS_EXPANDED),
    1365, uint(QZXing::DecoderFormat_UPC_A),
    1385, uint(QZXing::DecoderFormat_UPC_E),
    1405, uint(QZXing::DecoderFormat_UPC_EAN_EXTENSION),

       0        // eod
};

static const char qt_meta_stringdata_QZXing[] = {
    "QZXing\0\0decodingStarted()\0succeeded\0"
    "decodingFinished(bool)\0tag\0tagFound(QString)\0"
    "enabledFormatsChanged()\0QString\0"
    "image,maxWidth,maxHeight,smoothTransformation\0"
    "decodeImage(QImage,int,int,bool)\0"
    "image,maxWidth,maxHeight\0"
    "decodeImage(QImage,int,int)\0image,maxWidth\0"
    "decodeImage(QImage,int)\0image\0"
    "decodeImage(QImage)\0"
    "imageFilePath,maxWidth,maxHeight,smoothTransformation\0"
    "decodeImageFromFile(QString,int,int,bool)\0"
    "imageFilePath,maxWidth,maxHeight\0"
    "decodeImageFromFile(QString,int,int)\0"
    "imageFilePath,maxWidth\0"
    "decodeImageFromFile(QString,int)\0"
    "imageFilePath\0decodeImageFromFile(QString)\0"
    "item\0decodeImageQML(QObject*)\0"
    "item,offsetX,offsetY,width,height\0"
    "decodeSubImageQML(QObject*,double,double,double,double)\0"
    "item,offsetX,offsetY,width\0"
    "decodeSubImageQML(QObject*,double,double,double)\0"
    "item,offsetX,offsetY\0"
    "decodeSubImageQML(QObject*,double,double)\0"
    "item,offsetX\0decodeSubImageQML(QObject*,double)\0"
    "decodeSubImageQML(QObject*)\0int\0"
    "getProcessTimeOfLastDecoding()\0uint\0"
    "getEnabledFormats()\0hint\0setDecoder(uint)\0"
    "processingTime\0enabledDecoders\0"
    "DecoderFormat\0DecoderFormat_None\0"
    "DecoderFormat_Aztec\0DecoderFormat_CODABAR\0"
    "DecoderFormat_CODE_39\0DecoderFormat_CODE_93\0"
    "DecoderFormat_CODE_128\0DecoderFormat_DATA_MATRIX\0"
    "DecoderFormat_EAN_8\0DecoderFormat_EAN_13\0"
    "DecoderFormat_ITF\0DecoderFormat_MAXICODE\0"
    "DecoderFormat_PDF_417\0DecoderFormat_QR_CODE\0"
    "DecoderFormat_RSS_14\0DecoderFormat_RSS_EXPANDED\0"
    "DecoderFormat_UPC_A\0DecoderFormat_UPC_E\0"
    "DecoderFormat_UPC_EAN_EXTENSION\0"
};

void QZXing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QZXing *_t = static_cast<QZXing *>(_o);
        switch (_id) {
        case 0: _t->decodingStarted(); break;
        case 1: _t->decodingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->tagFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->enabledFormatsChanged(); break;
        case 4: { QString _r = _t->decodeImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->decodeImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->decodeImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->decodeImage((*reinterpret_cast< QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->decodeImageQML((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->getProcessTimeOfLastDecoding();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { uint _r = _t->getEnabledFormats();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 20: _t->setDecoder((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QZXing::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QZXing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QZXing,
      qt_meta_data_QZXing, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QZXing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QZXing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QZXing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QZXing))
        return static_cast<void*>(const_cast< QZXing*>(this));
    return QObject::qt_metacast(_clname);
}

int QZXing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getProcessTimeOfLastDecoding(); break;
        case 1: *reinterpret_cast< uint*>(_v) = getEnabledFormats(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setDecoder(*reinterpret_cast< uint*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QZXing::decodingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QZXing::decodingFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QZXing::tagFound(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QZXing::enabledFormatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
