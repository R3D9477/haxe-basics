// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_scripting_ScriptInterp
#include <haxe/ui/scripting/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_10_new,"haxe.ui.util.GenericConfig","new",0x01eed6b1,"haxe.ui.util.GenericConfig.new","haxe/ui/util/GenericConfig.hx",10,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_15_addSection,"haxe.ui.util.GenericConfig","addSection",0x44ca0793,"haxe.ui.util.GenericConfig.addSection","haxe/ui/util/GenericConfig.hx",15,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_26_findBy,"haxe.ui.util.GenericConfig","findBy",0x64924cbf,"haxe.ui.util.GenericConfig.findBy","haxe/ui/util/GenericConfig.hx",26,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_51_queryBool,"haxe.ui.util.GenericConfig","queryBool",0x65a37863,"haxe.ui.util.GenericConfig.queryBool","haxe/ui/util/GenericConfig.hx",51,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_59_query,"haxe.ui.util.GenericConfig","query",0x41108799,"haxe.ui.util.GenericConfig.query","haxe/ui/util/GenericConfig.hx",59,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_117_queryValues,"haxe.ui.util.GenericConfig","queryValues",0x9d4f385b,"haxe.ui.util.GenericConfig.queryValues","haxe/ui/util/GenericConfig.hx",117,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_8_boot,"haxe.ui.util.GenericConfig","boot",0xa72604c1,"haxe.ui.util.GenericConfig.boot","haxe/ui/util/GenericConfig.hx",8,0x31dfa140)
namespace haxe{
namespace ui{
namespace util{

void GenericConfig_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_10_new)
HXLINE(  11)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->sections =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic GenericConfig_obj::__CreateEmpty() { return new GenericConfig_obj; }

void *GenericConfig_obj::_hx_vtable = 0;

Dynamic GenericConfig_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GenericConfig_obj > _hx_result = new GenericConfig_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenericConfig_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03811e5d;
}

 ::haxe::ui::util::GenericConfig GenericConfig_obj::addSection(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_15_addSection)
HXLINE(  16)		 ::haxe::ui::util::GenericConfig config =  ::haxe::ui::util::GenericConfig_obj::__alloc( HX_CTX );
HXLINE(  17)		::Array< ::Dynamic> array = ( (::Array< ::Dynamic>)(this->sections->get(name)) );
HXLINE(  18)		if (hx::IsNull( array )) {
HXLINE(  19)			array = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)			this->sections->set(name,array);
            		}
HXLINE(  22)		array->push(config);
HXLINE(  23)		return config;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericConfig_obj,addSection,return )

 ::haxe::ui::util::GenericConfig GenericConfig_obj::findBy(::String section,::String field,::String value){
            	HX_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_26_findBy)
HXLINE(  27)		::Array< ::Dynamic> array = ( (::Array< ::Dynamic>)(this->sections->get(section)) );
HXLINE(  28)		if (hx::IsNull( array )) {
HXLINE(  29)			return null();
            		}
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (hx::IsNull( field )) {
HXLINE(  32)			_hx_tmp = hx::IsNull( value );
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  33)			return array->__get((int)0).StaticCast<  ::haxe::ui::util::GenericConfig >();
            		}
HXLINE(  36)		 ::haxe::ui::util::GenericConfig r = null();
HXLINE(  37)		{
HXLINE(  37)			int _g = (int)0;
HXDLIN(  37)			while((_g < array->length)){
HXLINE(  37)				 ::haxe::ui::util::GenericConfig item = array->__get(_g).StaticCast<  ::haxe::ui::util::GenericConfig >();
HXDLIN(  37)				_g = (_g + (int)1);
HXLINE(  38)				{
HXLINE(  38)					 ::Dynamic key = item->values->keys();
HXDLIN(  38)					while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  38)						::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  39)						bool _hx_tmp1;
HXDLIN(  39)						if ((key1 == field)) {
HXLINE(  39)							_hx_tmp1 = (( (::String)(item->values->get(key1)) ) == value);
            						}
            						else {
HXLINE(  39)							_hx_tmp1 = false;
            						}
HXDLIN(  39)						if (_hx_tmp1) {
HXLINE(  40)							r = item;
HXLINE(  41)							goto _hx_goto_3;
            						}
            					}
            					_hx_goto_3:;
            				}
HXLINE(  44)				if (hx::IsNotNull( r )) {
HXLINE(  45)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE(  48)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,findBy,return )

bool GenericConfig_obj::queryBool(::String q,hx::Null< bool >  __o_defaultValue, ::Dynamic conditionRef){
bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_51_queryBool)
HXLINE(  52)		::String r = this->query(q,null(),conditionRef);
HXLINE(  53)		if (hx::IsNull( r )) {
HXLINE(  54)			return defaultValue;
            		}
HXLINE(  56)		return (r == HX_("true",4e,a7,03,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,queryBool,return )

::String GenericConfig_obj::query(::String q,::String defaultValue, ::Dynamic conditionRef){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_59_query)
HXLINE(  60)		if (::haxe::ui::util::GenericConfig_obj::cache->exists(q)) {
HXLINE(  61)			return ( (::String)(::haxe::ui::util::GenericConfig_obj::cache->get(q)) );
            		}
HXLINE(  64)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\.(?![^\\[]*\\])",41,44,f3,3d),HX_("g",67,00,00,00));
HXLINE(  65)		::Array< ::String > finalArray = regexp->split(q);
HXLINE(  66)		 ::haxe::ui::util::GenericConfig ref = hx::ObjectPtr<OBJ_>(this);
HXLINE(  68)		::String value = null();
HXLINE(  69)		{
HXLINE(  69)			int _g = (int)0;
HXDLIN(  69)			while((_g < finalArray->length)){
HXLINE(  69)				::String f = finalArray->__get(_g);
HXDLIN(  69)				_g = (_g + (int)1);
HXLINE(  70)				bool _hx_tmp;
HXDLIN(  70)				if ((f.indexOf(HX_("[",5b,00,00,00),null()) == (int)-1)) {
HXLINE(  70)					_hx_tmp = (f.indexOf(HX_("@",40,00,00,00),null()) == (int)-1);
            				}
            				else {
HXLINE(  70)					_hx_tmp = false;
            				}
HXDLIN(  70)				if (_hx_tmp) {
HXLINE(  71)					ref = ref->findBy(f,null(),null());
            				}
            				else {
HXLINE(  72)					if ((f.indexOf(HX_("[",5b,00,00,00),null()) != (int)-1)) {
HXLINE(  73)						::Array< ::String > p = f.split(HX_("[",5b,00,00,00));
HXLINE(  74)						::String p1 = p->__get((int)0);
HXLINE(  75)						::String p2 = p->__get((int)1).split(HX_("=",3d,00,00,00))->__get((int)0);
HXLINE(  76)						::String p3 = p->__get((int)1).split(HX_("=",3d,00,00,00))->__get((int)1);
HXLINE(  77)						p3 = p3.substr((int)0,(p3.length - (int)1));
HXLINE(  79)						ref = ref->findBy(p1,p2,p3);
            					}
            					else {
HXLINE(  80)						if ((f.indexOf(HX_("@",40,00,00,00),null()) != (int)-1)) {
HXLINE(  81)							::String v = f.substr((int)1,f.length);
HXLINE(  82)							value = ( (::String)(ref->values->get(v)) );
HXLINE(  83)							goto _hx_goto_6;
            						}
            					}
            				}
HXLINE(  86)				if (hx::IsNull( ref )) {
HXLINE(  87)					::haxe::ui::util::GenericConfig_obj::cache->set(q,defaultValue);
HXLINE(  88)					return defaultValue;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE(  92)		if (hx::IsNotNull( conditionRef )) {
HXLINE(  93)			int n = q.indexOf(HX_("]",5d,00,00,00),null());
HXLINE(  94)			::String nq = (q.substring((int)0,(n + (int)1)) + HX_(".@condition",09,27,c9,36));
HXLINE(  95)			::String condition = this->query(nq,null(),null());
HXLINE(  96)			if (hx::IsNotNull( condition )) {
HXLINE(  97)				 ::haxe::ui::scripting::ScriptInterp interp =  ::haxe::ui::scripting::ScriptInterp_obj::__alloc( HX_CTX );
HXLINE(  98)				 ::hscript::Parser parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE(  99)				 ::hscript::Expr line = parser->parseString(condition,null());
HXLINE( 100)				interp->variables->set(HX_("this",5e,06,fc,4c),conditionRef);
HXLINE( 101)				bool r = ( (bool)(interp->expr(line)) );
HXLINE( 102)				if ((r == false)) {
HXLINE( 103)					return defaultValue;
            				}
            			}
            		}
HXLINE( 108)		if (hx::IsNull( value )) {
HXLINE( 109)			value = defaultValue;
            		}
HXLINE( 113)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,query,return )

 ::haxe::ds::StringMap GenericConfig_obj::queryValues(::String q, ::Dynamic conditionRef){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_117_queryValues)
HXLINE( 118)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\.(?![^\\[]*\\])",41,44,f3,3d),HX_("g",67,00,00,00));
HXLINE( 119)		::Array< ::String > finalArray = regexp->split(q);
HXLINE( 120)		 ::haxe::ui::util::GenericConfig ref = hx::ObjectPtr<OBJ_>(this);
HXLINE( 122)		{
HXLINE( 122)			int _g = (int)0;
HXDLIN( 122)			while((_g < finalArray->length)){
HXLINE( 122)				::String f = finalArray->__get(_g);
HXDLIN( 122)				_g = (_g + (int)1);
HXLINE( 123)				bool _hx_tmp;
HXDLIN( 123)				if ((f.indexOf(HX_("[",5b,00,00,00),null()) == (int)-1)) {
HXLINE( 123)					_hx_tmp = (f.indexOf(HX_("@",40,00,00,00),null()) == (int)-1);
            				}
            				else {
HXLINE( 123)					_hx_tmp = false;
            				}
HXDLIN( 123)				if (_hx_tmp) {
HXLINE( 124)					ref = ref->findBy(f,null(),null());
            				}
            				else {
HXLINE( 125)					if ((f.indexOf(HX_("[",5b,00,00,00),null()) != (int)-1)) {
HXLINE( 126)						::Array< ::String > p = f.split(HX_("[",5b,00,00,00));
HXLINE( 127)						::String p1 = p->__get((int)0);
HXLINE( 128)						::String p2 = p->__get((int)1).split(HX_("=",3d,00,00,00))->__get((int)0);
HXLINE( 129)						::String p3 = p->__get((int)1).split(HX_("=",3d,00,00,00))->__get((int)1);
HXLINE( 130)						p3 = p3.substr((int)0,(p3.length - (int)1));
HXLINE( 132)						ref = ref->findBy(p1,p2,p3);
            					}
            				}
HXLINE( 135)				if (hx::IsNull( ref )) {
HXLINE( 136)					return null();
            				}
            			}
            		}
HXLINE( 140)		if (hx::IsNotNull( conditionRef )) {
HXLINE( 141)			int n = q.indexOf(HX_("]",5d,00,00,00),null());
HXLINE( 142)			::String nq = (q.substring((int)0,(n + (int)1)) + HX_(".@condition",09,27,c9,36));
HXLINE( 143)			::String condition = this->query(nq,null(),null());
HXLINE( 144)			if (hx::IsNotNull( condition )) {
HXLINE( 145)				 ::haxe::ui::scripting::ScriptInterp interp =  ::haxe::ui::scripting::ScriptInterp_obj::__alloc( HX_CTX );
HXLINE( 146)				 ::hscript::Parser parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE( 147)				 ::hscript::Expr line = parser->parseString(condition,null());
HXLINE( 148)				interp->variables->set(HX_("this",5e,06,fc,4c),conditionRef);
HXLINE( 149)				bool r = ( (bool)(interp->expr(line)) );
HXLINE( 150)				if ((r == false)) {
HXLINE( 151)					return null();
            				}
            			}
            		}
HXLINE( 156)		return ref->values;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericConfig_obj,queryValues,return )

 ::haxe::ds::StringMap GenericConfig_obj::cache;


hx::ObjectPtr< GenericConfig_obj > GenericConfig_obj::__new() {
	hx::ObjectPtr< GenericConfig_obj > __this = new GenericConfig_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GenericConfig_obj > GenericConfig_obj::__alloc(hx::Ctx *_hx_ctx) {
	GenericConfig_obj *__this = (GenericConfig_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GenericConfig_obj), true, "haxe.ui.util.GenericConfig"));
	*(void **)__this = GenericConfig_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenericConfig_obj::GenericConfig_obj()
{
}

void GenericConfig_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericConfig);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(sections,"sections");
	HX_MARK_END_CLASS();
}

void GenericConfig_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(sections,"sections");
}

hx::Val GenericConfig_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"query") ) { return hx::Val( query_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"findBy") ) { return hx::Val( findBy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sections") ) { return hx::Val( sections ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queryBool") ) { return hx::Val( queryBool_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addSection") ) { return hx::Val( addSection_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"queryValues") ) { return hx::Val( queryValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GenericConfig_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
	}
	return false;
}

hx::Val GenericConfig_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sections") ) { sections=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GenericConfig_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void GenericConfig_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	outFields->push(HX_HCSTRING("sections","\xee","\x22","\x2d","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GenericConfig_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(GenericConfig_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(GenericConfig_obj,sections),HX_HCSTRING("sections","\xee","\x22","\x2d","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GenericConfig_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &GenericConfig_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GenericConfig_obj_sMemberFields[] = {
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("sections","\xee","\x22","\x2d","\xbf"),
	HX_HCSTRING("addSection","\xc4","\x31","\x62","\xc5"),
	HX_HCSTRING("findBy","\x70","\x4a","\x7b","\x86"),
	HX_HCSTRING("queryBool","\x52","\x5f","\xb5","\x14"),
	HX_HCSTRING("query","\x08","\x8b","\xea","\x5d"),
	HX_HCSTRING("queryValues","\x0a","\xf9","\xdb","\xa1"),
	::String(null()) };

static void GenericConfig_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericConfig_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GenericConfig_obj::cache,"cache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenericConfig_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericConfig_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GenericConfig_obj::cache,"cache");
};

#endif

hx::Class GenericConfig_obj::__mClass;

static ::String GenericConfig_obj_sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	::String(null())
};

void GenericConfig_obj::__register()
{
	hx::Object *dummy = new GenericConfig_obj;
	GenericConfig_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.GenericConfig","\x3f","\xaa","\xd7","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GenericConfig_obj::__GetStatic;
	__mClass->mSetStaticField = &GenericConfig_obj::__SetStatic;
	__mClass->mMarkFunc = GenericConfig_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GenericConfig_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GenericConfig_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericConfig_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenericConfig_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericConfig_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericConfig_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GenericConfig_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_8_boot)
HXDLIN(   8)		cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
