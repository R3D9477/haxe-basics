// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1d74213eefbc85d_77_callStack,"haxe.CallStack","callStack",0xfa9165be,"haxe.CallStack.callStack","/usr/share/haxe/std/haxe/CallStack.hx",77,0xe5f54202)
HX_LOCAL_STACK_FRAME(_hx_pos_b1d74213eefbc85d_231_toString,"haxe.CallStack","toString",0xd59be738,"haxe.CallStack.toString","/usr/share/haxe/std/haxe/CallStack.hx",231,0xe5f54202)
static const ::String _hx_array_data_6d544b62_3[] = {
	HX_("\nCalled from ",bd,26,6b,81),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b1d74213eefbc85d_241_itemToString,"haxe.CallStack","itemToString",0xc121696b,"haxe.CallStack.itemToString","/usr/share/haxe/std/haxe/CallStack.hx",241,0xe5f54202)
static const ::String _hx_array_data_6d544b62_5[] = {
	HX_("a C function",f4,1b,53,cb),
};
static const ::String _hx_array_data_6d544b62_6[] = {
	HX_("module ",f4,e1,fa,f7),
};
static const ::String _hx_array_data_6d544b62_7[] = {
	HX_(" (",08,1c,00,00),
};
static const ::String _hx_array_data_6d544b62_8[] = {
	HX_(" line ",8c,69,6d,40),
};
static const ::String _hx_array_data_6d544b62_9[] = {
	HX_(")",29,00,00,00),
};
static const ::String _hx_array_data_6d544b62_10[] = {
	HX_(".",2e,00,00,00),
};
static const ::String _hx_array_data_6d544b62_11[] = {
	HX_("local function #",b0,cd,97,ff),
};
namespace haxe{

void CallStack_obj::__construct() { }

Dynamic CallStack_obj::__CreateEmpty() { return new CallStack_obj; }

void *CallStack_obj::_hx_vtable = 0;

Dynamic CallStack_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallStack_obj > _hx_result = new CallStack_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStack_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6207a884;
}

::Array< ::Dynamic> CallStack_obj::callStack(){
            	HX_STACKFRAME(&_hx_pos_b1d74213eefbc85d_77_callStack)
HXLINE(  89)		::Array< ::String > s = ::__hxcpp_get_call_stack(true);
HXLINE(  90)		return ::haxe::CallStack_obj::makeStack(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,callStack,return )

::Array< ::Dynamic> CallStack_obj::exceptionStack(){
	::Array< ::String > s = ::__hxcpp_get_exception_stack();
	return ::haxe::CallStack_obj::makeStack(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,exceptionStack,return )

::String CallStack_obj::toString(::Array< ::Dynamic> stack){
            	HX_GC_STACKFRAME(&_hx_pos_b1d74213eefbc85d_231_toString)
HXLINE( 232)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 233)		{
HXLINE( 233)			int _g = (int)0;
HXDLIN( 233)			while((_g < stack->length)){
HXLINE( 233)				 ::haxe::StackItem s = stack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN( 233)				_g = (_g + (int)1);
HXLINE( 234)				{
HXLINE( 234)					if (hx::IsNotNull( b->charBuf )) {
HXLINE( 234)						b->flush();
            					}
HXDLIN( 234)					if (hx::IsNull( b->b )) {
HXLINE( 234)						b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_3,1);
            					}
            					else {
HXLINE( 234)						b->b->push(HX_("\nCalled from ",bd,26,6b,81));
            					}
            				}
HXLINE( 235)				::haxe::CallStack_obj::itemToString(b,s);
            			}
            		}
HXLINE( 237)		return b->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,toString,return )

void CallStack_obj::itemToString( ::StringBuf b, ::haxe::StackItem s){
            	HX_STACKFRAME(&_hx_pos_b1d74213eefbc85d_241_itemToString)
HXDLIN( 241)		switch((int)(_hx_getEnumValueIndex(s))){
            			case (int)0: {
HXLINE( 243)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 243)					b->flush();
            				}
HXDLIN( 243)				if (hx::IsNull( b->b )) {
HXLINE( 243)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_5,1);
            				}
            				else {
HXLINE( 243)					b->b->push(HX_("a C function",f4,1b,53,cb));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 244)				::String m = s->_hx_getString(0);
HXDLIN( 244)				{
HXLINE( 245)					{
HXLINE( 245)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 245)							b->flush();
            						}
HXDLIN( 245)						if (hx::IsNull( b->b )) {
HXLINE( 245)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_6,1);
            						}
            						else {
HXLINE( 245)							b->b->push(HX_("module ",f4,e1,fa,f7));
            						}
            					}
HXLINE( 246)					{
HXLINE( 246)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 246)							b->flush();
            						}
HXDLIN( 246)						if (hx::IsNull( b->b )) {
HXLINE( 246)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(m));
            						}
            						else {
HXLINE( 246)							::Array< ::String > b1 = b->b;
HXDLIN( 246)							b1->push(::Std_obj::string(m));
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 247)				int line = s->_hx_getInt(2);
HXDLIN( 247)				::String file = s->_hx_getString(1);
HXDLIN( 247)				 ::haxe::StackItem s1 = s->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 247)				{
HXLINE( 248)					if (hx::IsNotNull( s1 )) {
HXLINE( 249)						::haxe::CallStack_obj::itemToString(b,s1);
HXLINE( 250)						{
HXLINE( 250)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 250)								b->flush();
            							}
HXDLIN( 250)							if (hx::IsNull( b->b )) {
HXLINE( 250)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_7,1);
            							}
            							else {
HXLINE( 250)								b->b->push(HX_(" (",08,1c,00,00));
            							}
            						}
            					}
HXLINE( 252)					{
HXLINE( 252)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 252)							b->flush();
            						}
HXDLIN( 252)						if (hx::IsNull( b->b )) {
HXLINE( 252)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(file));
            						}
            						else {
HXLINE( 252)							::Array< ::String > b2 = b->b;
HXDLIN( 252)							b2->push(::Std_obj::string(file));
            						}
            					}
HXLINE( 253)					{
HXLINE( 253)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 253)							b->flush();
            						}
HXDLIN( 253)						if (hx::IsNull( b->b )) {
HXLINE( 253)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_8,1);
            						}
            						else {
HXLINE( 253)							b->b->push(HX_(" line ",8c,69,6d,40));
            						}
            					}
HXLINE( 254)					{
HXLINE( 254)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 254)							b->flush();
            						}
HXDLIN( 254)						if (hx::IsNull( b->b )) {
HXLINE( 254)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(line));
            						}
            						else {
HXLINE( 254)							::Array< ::String > b3 = b->b;
HXDLIN( 254)							b3->push(::Std_obj::string(line));
            						}
            					}
HXLINE( 255)					if (hx::IsNotNull( s1 )) {
HXLINE( 255)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 255)							b->flush();
            						}
HXDLIN( 255)						if (hx::IsNull( b->b )) {
HXLINE( 255)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_9,1);
            						}
            						else {
HXLINE( 255)							b->b->push(HX_(")",29,00,00,00));
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 256)				::String meth = s->_hx_getString(1);
HXDLIN( 256)				::String cname = s->_hx_getString(0);
HXDLIN( 256)				{
HXLINE( 257)					{
HXLINE( 257)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 257)							b->flush();
            						}
HXDLIN( 257)						if (hx::IsNull( b->b )) {
HXLINE( 257)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(cname));
            						}
            						else {
HXLINE( 257)							::Array< ::String > b4 = b->b;
HXDLIN( 257)							b4->push(::Std_obj::string(cname));
            						}
            					}
HXLINE( 258)					{
HXLINE( 258)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 258)							b->flush();
            						}
HXDLIN( 258)						if (hx::IsNull( b->b )) {
HXLINE( 258)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_10,1);
            						}
            						else {
HXLINE( 258)							b->b->push(HX_(".",2e,00,00,00));
            						}
            					}
HXLINE( 259)					{
HXLINE( 259)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 259)							b->flush();
            						}
HXDLIN( 259)						if (hx::IsNull( b->b )) {
HXLINE( 259)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(meth));
            						}
            						else {
HXLINE( 259)							::Array< ::String > b5 = b->b;
HXDLIN( 259)							b5->push(::Std_obj::string(meth));
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 260)				 ::Dynamic n = s->_hx_getObject(0);
HXDLIN( 260)				{
HXLINE( 261)					{
HXLINE( 261)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 261)							b->flush();
            						}
HXDLIN( 261)						if (hx::IsNull( b->b )) {
HXLINE( 261)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_11,1);
            						}
            						else {
HXLINE( 261)							b->b->push(HX_("local function #",b0,cd,97,ff));
            						}
            					}
HXLINE( 262)					{
HXLINE( 262)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 262)							b->flush();
            						}
HXDLIN( 262)						if (hx::IsNull( b->b )) {
HXLINE( 262)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(n));
            						}
            						else {
HXLINE( 262)							::Array< ::String > b6 = b->b;
HXDLIN( 262)							b6->push(::Std_obj::string(n));
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_obj,itemToString,(void))

::Array< ::Dynamic> CallStack_obj::makeStack(::Array< ::String > s){
	::Array< ::String > stack = s;
	::Array< ::Dynamic> m = ::Array_obj< ::Dynamic>::__new();
	{
		int _g = (int)0;
		while((_g < stack->length)){
			::String func = stack->__get(_g);
			_g = (_g + (int)1);
			::Array< ::String > words = func.split(HX_("::",c0,32,00,00));
			if ((words->length == (int)0)) {
				m->push(::haxe::StackItem_obj::CFunction_dyn());
			}
			else {
				if ((words->length == (int)2)) {
					m->push(::haxe::StackItem_obj::Method(words->__get((int)0),words->__get((int)1)));
				}
				else {
					if ((words->length == (int)4)) {
						 ::haxe::StackItem _hx_tmp = ::haxe::StackItem_obj::Method(words->__get((int)0),words->__get((int)1));
						::String words1 = words->__get((int)2);
						m->push(::haxe::StackItem_obj::FilePos(_hx_tmp,words1,::Std_obj::parseInt(words->__get((int)3))));
					}
				}
			}
		}
	}
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,makeStack,return )


CallStack_obj::CallStack_obj()
{
}

bool CallStack_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeStack") ) { outValue = makeStack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemToString") ) { outValue = itemToString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CallStack_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CallStack_obj_sStaticStorageInfo = 0;
#endif

static void CallStack_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallStack_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStack_obj::__mClass;

static ::String CallStack_obj_sStaticFields[] = {
	HX_HCSTRING("callStack","\xca","\xc1","\x4a","\x10"),
	HX_HCSTRING("exceptionStack","\x79","\x48","\x56","\x0b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("itemToString","\xdf","\x1c","\x98","\x1c"),
	HX_HCSTRING("makeStack","\x7a","\xde","\xa3","\x57"),
	::String(null())
};

void CallStack_obj::__register()
{
	hx::Object *dummy = new CallStack_obj;
	CallStack_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.CallStack","\x62","\x4b","\x54","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallStack_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CallStack_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStack_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallStack_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStack_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
