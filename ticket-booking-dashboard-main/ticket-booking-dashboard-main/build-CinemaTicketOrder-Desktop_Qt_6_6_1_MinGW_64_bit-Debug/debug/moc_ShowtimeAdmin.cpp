/****************************************************************************
** Meta object code from reading C++ file 'ShowtimeAdmin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../CinemaTicketOrder/ShowtimeAdmin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShowtimeAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSShowtimeAdminENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSShowtimeAdminENDCLASS = QtMocHelpers::stringData(
    "ShowtimeAdmin",
    "on_btn_choosePhoto_clicked",
    "",
    "on_btn_addMovie_clicked",
    "on_btn_removeMovie_clicked",
    "on_pushButton_export_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShowtimeAdminENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[27];
    char stringdata5[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShowtimeAdminENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShowtimeAdminENDCLASS_t qt_meta_stringdata_CLASSShowtimeAdminENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ShowtimeAdmin"
        QT_MOC_LITERAL(14, 26),  // "on_btn_choosePhoto_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 23),  // "on_btn_addMovie_clicked"
        QT_MOC_LITERAL(66, 26),  // "on_btn_removeMovie_clicked"
        QT_MOC_LITERAL(93, 28)   // "on_pushButton_export_clicked"
    },
    "ShowtimeAdmin",
    "on_btn_choosePhoto_clicked",
    "",
    "on_btn_addMovie_clicked",
    "on_btn_removeMovie_clicked",
    "on_pushButton_export_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShowtimeAdminENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShowtimeAdmin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSShowtimeAdminENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShowtimeAdminENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShowtimeAdminENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShowtimeAdmin, std::true_type>,
        // method 'on_btn_choosePhoto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_addMovie_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_removeMovie_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_export_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ShowtimeAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowtimeAdmin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_choosePhoto_clicked(); break;
        case 1: _t->on_btn_addMovie_clicked(); break;
        case 2: _t->on_btn_removeMovie_clicked(); break;
        case 3: _t->on_pushButton_export_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ShowtimeAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowtimeAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShowtimeAdminENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShowtimeAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
