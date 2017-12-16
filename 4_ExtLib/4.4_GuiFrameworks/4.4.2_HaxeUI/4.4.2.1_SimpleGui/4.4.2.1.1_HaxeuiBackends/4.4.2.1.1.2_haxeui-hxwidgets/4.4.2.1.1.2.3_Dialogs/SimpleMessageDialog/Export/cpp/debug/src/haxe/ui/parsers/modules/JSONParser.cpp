// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_JSONParser
#include <haxe/ui/parsers/modules/JSONParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ObjectParser
#include <haxe/ui/parsers/modules/ObjectParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_811c0b9b3c75c253_5_new,"haxe.ui.parsers.modules.JSONParser","new",0x95cb98ec,"haxe.ui.parsers.modules.JSONParser.new","haxe/ui/parsers/modules/JSONParser.hx",5,0x91096b22)
HX_LOCAL_STACK_FRAME(_hx_pos_811c0b9b3c75c253_9_parse,"haxe.ui.parsers.modules.JSONParser","parse",0x76b993bf,"haxe.ui.parsers.modules.JSONParser.parse","haxe/ui/parsers/modules/JSONParser.hx",9,0x91096b22)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void JSONParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_811c0b9b3c75c253_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic JSONParser_obj::__CreateEmpty() { return new JSONParser_obj; }

void *JSONParser_obj::_hx_vtable = 0;

Dynamic JSONParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JSONParser_obj > _hx_result = new JSONParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JSONParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39f30734) {
		if (inClassId<=(int)0x078bbee0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x078bbee0;
		} else {
			return inClassId==(int)0x39f30734;
		}
	} else {
		return inClassId==(int)0x5b91306b;
	}
}

 ::haxe::ui::parsers::modules::Module JSONParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_811c0b9b3c75c253_9_parse)
HXDLIN(   9)		return this->fromObject( ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->parseRec());
            	}



hx::ObjectPtr< JSONParser_obj > JSONParser_obj::__new() {
	hx::ObjectPtr< JSONParser_obj > __this = new JSONParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< JSONParser_obj > JSONParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	JSONParser_obj *__this = (JSONParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JSONParser_obj), false, "haxe.ui.parsers.modules.JSONParser"));
	*(void **)__this = JSONParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

JSONParser_obj::JSONParser_obj()
{
}

hx::Val JSONParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JSONParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *JSONParser_obj_sStaticStorageInfo = 0;
#endif

static ::String JSONParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

static void JSONParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JSONParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONParser_obj::__mClass,"__mClass");
};

#endif

hx::Class JSONParser_obj::__mClass;

void JSONParser_obj::__register()
{
	hx::Object *dummy = new JSONParser_obj;
	JSONParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.JSONParser","\xfa","\xf2","\x01","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JSONParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JSONParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JSONParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JSONParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JSONParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JSONParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
