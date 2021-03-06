// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPreferencesListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaPreferencesListener.h"
                 void REcmaPreferencesListenerAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPreferencesListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaPreferencesListener::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RPreferencesListener
        REcmaHelper::registerFunction(&engine, proto, getRPreferencesListener, "getRPreferencesListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RPreferencesListener:
        

        // methods of secondary base class RPreferencesListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updatePreferences, "updatePreferences");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPreferencesListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RPreferencesListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPreferencesListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPreferencesListenerAdapter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPreferencesListenerAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPreferencesListenerAdapter
                    * cppResult =
                    new
                    RPreferencesListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPreferencesListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaPreferencesListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RPreferencesListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaPreferencesListenerAdapter::getRPreferencesListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPreferencesListener* cppResult =
                    qscriptvalue_cast<RPreferencesListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaPreferencesListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPreferencesListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPreferencesListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RPreferencesListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RPreferencesListener:
        

        // methods of secondary base class RPreferencesListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPreferencesListenerAdapter::updatePreferences
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPreferencesListenerAdapter::updatePreferences", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPreferencesListenerAdapter::updatePreferences";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPreferencesListenerAdapter* self = 
                        getSelf("updatePreferences", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPreferencesListenerAdapter: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updatePreferences(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPreferencesListenerAdapter.updatePreferences().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPreferencesListenerAdapter::updatePreferences", context, engine);
            return result;
        }
         QScriptValue REcmaPreferencesListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPreferencesListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPreferencesListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPreferencesListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPreferencesListenerAdapter* self = getSelf("RPreferencesListenerAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPreferencesListenerAdapter* REcmaPreferencesListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPreferencesListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPreferencesListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPreferencesListenerAdapter.%1(): "
                        "This object is not a RPreferencesListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPreferencesListenerAdapter* REcmaPreferencesListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPreferencesListenerAdapter* selfBase = getSelf(fName, context);
                RPreferencesListenerAdapter* self = dynamic_cast<RPreferencesListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPreferencesListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPreferencesListenerAdapter.%1(): "
                    "This object is not a RPreferencesListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RPreferencesListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RPreferencesListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RPreferencesListenerAdapter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    