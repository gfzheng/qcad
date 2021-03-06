#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>

#include <qwebpage.h>
#include <QVariant>

#include "qtscriptshell_QWebPage_ExtensionReturn.h"

static const char * const qtscript_QWebPage_ExtensionReturn_function_names[] = {
    "QWebPage_ExtensionReturn"
    // static
    // prototype
    , "toString"
};

static const char * const qtscript_QWebPage_ExtensionReturn_function_signatures[] = {
    ""
    // static
    // prototype
""
};

static const int qtscript_QWebPage_ExtensionReturn_function_lengths[] = {
    0
    // static
    // prototype
    , 0
};

static QScriptValue qtscript_QWebPage_ExtensionReturn_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QWebPage_ExtensionReturn::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QWebPage::ExtensionReturn*)
Q_DECLARE_METATYPE(QtScriptShell_QWebPage_ExtensionReturn*)

//
// QWebPage_ExtensionReturn
//

static QScriptValue qtscript_QWebPage_ExtensionReturn_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 0;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QWebPage::ExtensionReturn* _q_self = qscriptvalue_cast<QWebPage::ExtensionReturn*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QWebPage_ExtensionReturn.%0(): this object is not a QWebPage_ExtensionReturn")
            .arg(qtscript_QWebPage_ExtensionReturn_function_names[_id+1]));
    }

    switch (_id) {
    case 0: {
    QString result = QString::fromLatin1("QWebPage_ExtensionReturn");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QWebPage_ExtensionReturn_throw_ambiguity_error_helper(context,
        qtscript_QWebPage_ExtensionReturn_function_names[_id+1],
        qtscript_QWebPage_ExtensionReturn_function_signatures[_id+1]);
}

static QScriptValue qtscript_QWebPage_ExtensionReturn_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QWebPage_ExtensionReturn(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QWebPage_ExtensionReturn* _q_cpp_result = new QtScriptShell_QWebPage_ExtensionReturn();
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), qVariantFromValue((QWebPage::ExtensionReturn*)_q_cpp_result));
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QWebPage_ExtensionReturn_throw_ambiguity_error_helper(context,
        qtscript_QWebPage_ExtensionReturn_function_names[_id],
        qtscript_QWebPage_ExtensionReturn_function_signatures[_id]);
}

QScriptValue qtscript_create_QWebPage_ExtensionReturn_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QWebPage::ExtensionReturn*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(qVariantFromValue((QWebPage::ExtensionReturn*)0));

    engine->setDefaultPrototype(qMetaTypeId<QWebPage::ExtensionReturn*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QWebPage_ExtensionReturn_static_call, proto, qtscript_QWebPage_ExtensionReturn_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    return ctor;
}
