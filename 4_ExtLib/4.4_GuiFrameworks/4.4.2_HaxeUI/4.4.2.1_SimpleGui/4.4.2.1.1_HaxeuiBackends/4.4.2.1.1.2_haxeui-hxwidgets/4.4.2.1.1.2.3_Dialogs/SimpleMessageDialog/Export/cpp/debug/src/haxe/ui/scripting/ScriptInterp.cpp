// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55532131ebe49e89_9_new,"haxe.ui.scripting.ScriptInterp","new",0x8097e6fa,"haxe.ui.scripting.ScriptInterp.new","haxe/ui/scripting/ScriptInterp.hx",9,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_21_isVar,"haxe.ui.scripting.ScriptInterp","isVar",0xebc27a37,"haxe.ui.scripting.ScriptInterp.isVar","haxe/ui/scripting/ScriptInterp.hx",21,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_24_cnew,"haxe.ui.scripting.ScriptInterp","cnew",0xfd13a003,"haxe.ui.scripting.ScriptInterp.cnew","haxe/ui/scripting/ScriptInterp.hx",24,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_31_get,"haxe.ui.scripting.ScriptInterp","get",0x80929730,"haxe.ui.scripting.ScriptInterp.get","haxe/ui/scripting/ScriptInterp.hx",31,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_39_parseResult,"haxe.ui.scripting.ScriptInterp","parseResult",0x8c44560a,"haxe.ui.scripting.ScriptInterp.parseResult","haxe/ui/scripting/ScriptInterp.hx",39,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_65_set,"haxe.ui.scripting.ScriptInterp","set",0x809bb23c,"haxe.ui.scripting.ScriptInterp.set","haxe/ui/scripting/ScriptInterp.hx",65,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_73_addClassAlias,"haxe.ui.scripting.ScriptInterp","addClassAlias",0x6f40e2d3,"haxe.ui.scripting.ScriptInterp.addClassAlias","haxe/ui/scripting/ScriptInterp.hx",73,0x61b37435)
HX_LOCAL_STACK_FRAME(_hx_pos_55532131ebe49e89_80_addStaticClass,"haxe.ui.scripting.ScriptInterp","addStaticClass",0x91cbf7af,"haxe.ui.scripting.ScriptInterp.addStaticClass","haxe/ui/scripting/ScriptInterp.hx",80,0x61b37435)
namespace haxe{
namespace ui{
namespace scripting{

void ScriptInterp_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		if (hx::IsNotNull( ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses )) {
HXLINE(  12)			 ::Dynamic name = ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->keys();
HXDLIN(  12)			while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  12)				::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  13)				 ::Dynamic c = ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->get(name1);
HXLINE(  14)				this->variables->set(name1,c);
            			}
            		}
HXLINE(  17)		this->variables->set(HX_("isVar",1d,09,58,c1),this->isVar_dyn());
            	}

Dynamic ScriptInterp_obj::__CreateEmpty() { return new ScriptInterp_obj; }

void *ScriptInterp_obj::_hx_vtable = 0;

Dynamic ScriptInterp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScriptInterp_obj > _hx_result = new ScriptInterp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScriptInterp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x005c6827) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x005c6827;
	} else {
		return inClassId==(int)0x7bc9f0dc;
	}
}

bool ScriptInterp_obj::isVar(::String varName){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_21_isVar)
HXDLIN(  21)		return this->variables->exists(varName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptInterp_obj,isVar,return )

 ::Dynamic ScriptInterp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_24_cnew)
HXLINE(  25)		bool _hx_tmp;
HXDLIN(  25)		if (hx::IsNotNull( ::haxe::ui::scripting::ScriptInterp_obj::_classAliases )) {
HXLINE(  25)			_hx_tmp = ::haxe::ui::scripting::ScriptInterp_obj::_classAliases->exists(cl);
            		}
            		else {
HXLINE(  25)			_hx_tmp = false;
            		}
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  26)			cl = ( (::String)(::haxe::ui::scripting::ScriptInterp_obj::_classAliases->get(cl)) );
            		}
HXLINE(  28)		return this->super::cnew(cl,args);
            	}


 ::Dynamic ScriptInterp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_31_get)
HXLINE(  32)		if (hx::IsNull( o )) {
HXLINE(  33)			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
            		}
HXLINE(  35)		 ::Dynamic v = ::Reflect_obj::getProperty(o,f);
HXLINE(  36)		return this->parseResult(v);
            	}


 ::Dynamic ScriptInterp_obj::parseResult( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_39_parseResult)
HXLINE(  40)		if (hx::IsNull( v )) {
HXLINE(  41)			return v;
            		}
HXLINE(  43)		::String temp = ::Std_obj::string(v);
HXLINE(  44)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^_?(Bool|Float|Int|String)\\((.*)\\)",61,e0,3c,41),HX_("g",67,00,00,00));
HXLINE(  45)		if ((regexp->match(temp) == false)) {
HXLINE(  46)			return v;
            		}
HXLINE(  49)		::String m1 = regexp->matched((int)1);
HXLINE(  50)		::String m2 = regexp->matched((int)2);
HXLINE(  51)		::String _hx_switch_0 = m1;
            		if (  (_hx_switch_0==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE(  53)			return ::Std_obj::parseFloat(m2);
HXDLIN(  53)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("Float",7c,35,c4,95)) ){
HXLINE(  55)			return ::Std_obj::parseFloat(m2);
HXDLIN(  55)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("Int",cf,c4,37,00)) ){
HXLINE(  57)			return ::Std_obj::parseInt(m2);
HXDLIN(  57)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("String",f1,9c,c4,45)) ){
HXLINE(  59)			return ::Std_obj::string(m2);
HXDLIN(  59)			goto _hx_goto_5;
            		}
            		/* default */{
            		}
            		_hx_goto_5:;
HXLINE(  62)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptInterp_obj,parseResult,return )

 ::Dynamic ScriptInterp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_55532131ebe49e89_65_set)
HXLINE(  66)		if (hx::IsNull( o )) {
HXLINE(  67)			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
            		}
HXLINE(  69)		::Reflect_obj::setProperty(o,f,v);
HXLINE(  70)		return v;
            	}


 ::haxe::ds::StringMap ScriptInterp_obj::_classAliases;

 ::haxe::ds::StringMap ScriptInterp_obj::_staticClasses;

void ScriptInterp_obj::addClassAlias(::String alias,::String classPath){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_73_addClassAlias)
HXLINE(  74)		if (hx::IsNull( ::haxe::ui::scripting::ScriptInterp_obj::_classAliases )) {
HXLINE(  75)			::haxe::ui::scripting::ScriptInterp_obj::_classAliases =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  77)		::haxe::ui::scripting::ScriptInterp_obj::_classAliases->set(alias,classPath);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScriptInterp_obj,addClassAlias,(void))

void ScriptInterp_obj::addStaticClass(::String alias, ::Dynamic c){
            	HX_GC_STACKFRAME(&_hx_pos_55532131ebe49e89_80_addStaticClass)
HXLINE(  81)		if (hx::IsNull( ::haxe::ui::scripting::ScriptInterp_obj::_staticClasses )) {
HXLINE(  82)			::haxe::ui::scripting::ScriptInterp_obj::_staticClasses =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  84)		::haxe::ui::scripting::ScriptInterp_obj::_staticClasses->set(alias,c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScriptInterp_obj,addStaticClass,(void))


hx::ObjectPtr< ScriptInterp_obj > ScriptInterp_obj::__new() {
	hx::ObjectPtr< ScriptInterp_obj > __this = new ScriptInterp_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScriptInterp_obj > ScriptInterp_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScriptInterp_obj *__this = (ScriptInterp_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScriptInterp_obj), true, "haxe.ui.scripting.ScriptInterp"));
	*(void **)__this = ScriptInterp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScriptInterp_obj::ScriptInterp_obj()
{
}

hx::Val ScriptInterp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cnew") ) { return hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isVar") ) { return hx::Val( isVar_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseResult") ) { return hx::Val( parseResult_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScriptInterp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_classAliases") ) { outValue = ( _classAliases ); return true; }
		if (HX_FIELD_EQ(inName,"addClassAlias") ) { outValue = addClassAlias_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_staticClasses") ) { outValue = ( _staticClasses ); return true; }
		if (HX_FIELD_EQ(inName,"addStaticClass") ) { outValue = addStaticClass_dyn(); return true; }
	}
	return false;
}

bool ScriptInterp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_classAliases") ) { _classAliases=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_staticClasses") ) { _staticClasses=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ScriptInterp_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ScriptInterp_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ScriptInterp_obj::_classAliases,HX_HCSTRING("_classAliases","\x85","\x67","\xa4","\x70")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ScriptInterp_obj::_staticClasses,HX_HCSTRING("_staticClasses","\xd9","\x9b","\xf5","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ScriptInterp_obj_sMemberFields[] = {
	HX_HCSTRING("isVar","\x1d","\x09","\x58","\xc1"),
	HX_HCSTRING("cnew","\xdd","\xef","\xc3","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("parseResult","\x70","\x15","\xc1","\x83"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ScriptInterp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::_classAliases,"_classAliases");
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::_staticClasses,"_staticClasses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScriptInterp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::_classAliases,"_classAliases");
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::_staticClasses,"_staticClasses");
};

#endif

hx::Class ScriptInterp_obj::__mClass;

static ::String ScriptInterp_obj_sStaticFields[] = {
	HX_HCSTRING("_classAliases","\x85","\x67","\xa4","\x70"),
	HX_HCSTRING("_staticClasses","\xd9","\x9b","\xf5","\x2e"),
	HX_HCSTRING("addClassAlias","\xb9","\xc7","\xf8","\xce"),
	HX_HCSTRING("addStaticClass","\x09","\x5c","\xfc","\xf2"),
	::String(null())
};

void ScriptInterp_obj::__register()
{
	hx::Object *dummy = new ScriptInterp_obj;
	ScriptInterp_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.scripting.ScriptInterp","\x08","\xa2","\xae","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScriptInterp_obj::__GetStatic;
	__mClass->mSetStaticField = &ScriptInterp_obj::__SetStatic;
	__mClass->mMarkFunc = ScriptInterp_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ScriptInterp_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScriptInterp_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScriptInterp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScriptInterp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScriptInterp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScriptInterp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace scripting
