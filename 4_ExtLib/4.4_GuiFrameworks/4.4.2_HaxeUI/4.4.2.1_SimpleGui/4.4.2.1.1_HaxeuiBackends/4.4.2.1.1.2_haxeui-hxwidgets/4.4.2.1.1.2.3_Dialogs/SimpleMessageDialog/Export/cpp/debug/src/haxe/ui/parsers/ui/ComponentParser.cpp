// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#include <haxe/ui/parsers/ui/ComponentInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_JSONParser
#include <haxe/ui/parsers/ui/JSONParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ObjectParser
#include <haxe/ui/parsers/ui/ObjectParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_XMLParser
#include <haxe/ui/parsers/ui/XMLParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_319fd69890a32220_10_new,"haxe.ui.parsers.ui.ComponentParser","new",0x24a90640,"haxe.ui.parsers.ui.ComponentParser.new","haxe/ui/parsers/ui/ComponentParser.hx",10,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_14_parse,"haxe.ui.parsers.ui.ComponentParser","parse",0x89cbfe13,"haxe.ui.parsers.ui.ComponentParser.parse","haxe/ui/parsers/ui/ComponentParser.hx",14,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_17_get,"haxe.ui.parsers.ui.ComponentParser","get",0x24a3b676,"haxe.ui.parsers.ui.ComponentParser.get","haxe/ui/parsers/ui/ComponentParser.hx",17,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_34_defaultParsers,"haxe.ui.parsers.ui.ComponentParser","defaultParsers",0x043dd613,"haxe.ui.parsers.ui.ComponentParser.defaultParsers","haxe/ui/parsers/ui/ComponentParser.hx",34,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_44_register,"haxe.ui.parsers.ui.ComponentParser","register",0x523b2483,"haxe.ui.parsers.ui.ComponentParser.register","haxe/ui/parsers/ui/ComponentParser.hx",44,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_52_nextId,"haxe.ui.parsers.ui.ComponentParser","nextId",0x8d8dddce,"haxe.ui.parsers.ui.ComponentParser.nextId","haxe/ui/parsers/ui/ComponentParser.hx",52,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_59_float,"haxe.ui.parsers.ui.ComponentParser","float",0xcf0d337c,"haxe.ui.parsers.ui.ComponentParser.float","haxe/ui/parsers/ui/ComponentParser.hx",59,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_62_isPercentage,"haxe.ui.parsers.ui.ComponentParser","isPercentage",0x9350c9c4,"haxe.ui.parsers.ui.ComponentParser.isPercentage","haxe/ui/parsers/ui/ComponentParser.hx",62,0x5811c530)
HX_LOCAL_STACK_FRAME(_hx_pos_319fd69890a32220_51_boot,"haxe.ui.parsers.ui.ComponentParser","boot",0xe7557252,"haxe.ui.parsers.ui.ComponentParser.boot","haxe/ui/parsers/ui/ComponentParser.hx",51,0x5811c530)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void ComponentParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_10_new)
            	}

Dynamic ComponentParser_obj::__CreateEmpty() { return new ComponentParser_obj; }

void *ComponentParser_obj::_hx_vtable = 0;

Dynamic ComponentParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentParser_obj > _hx_result = new ComponentParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x310ae04e;
}

 ::haxe::ui::parsers::ui::ComponentInfo ComponentParser_obj::parse(::String data, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_14_parse)
HXDLIN(  14)		HX_STACK_DO_THROW(HX_("Component parser not implemented!",2a,94,5e,64));
HXDLIN(  14)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentParser_obj,parse,return )

 ::haxe::ds::StringMap ComponentParser_obj::_parsers;

 ::haxe::ui::parsers::ui::ComponentParser ComponentParser_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_17_get)
HXLINE(  18)		::haxe::ui::parsers::ui::ComponentParser_obj::defaultParsers();
HXLINE(  20)		hx::Class cls = ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers->get(extension).StaticCast< hx::Class >();
HXLINE(  21)		if (hx::IsNull( cls )) {
HXLINE(  22)			HX_STACK_DO_THROW(((HX_("No component parser found for \"",ce,d8,9a,20) + extension) + HX_("\"",22,00,00,00)));
            		}
HXLINE(  25)		 ::haxe::ui::parsers::ui::ComponentParser instance = ( ( ::haxe::ui::parsers::ui::ComponentParser)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  26)		if (hx::IsNull( instance )) {
HXLINE(  27)			HX_STACK_DO_THROW(((HX_("Could not create component parser instance \"",7d,31,af,ad) + ::Std_obj::string(cls)) + HX_("\"",22,00,00,00)));
            		}
HXLINE(  30)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,get,return )

void ComponentParser_obj::defaultParsers(){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_34_defaultParsers)
HXDLIN(  34)		if (hx::IsNull( ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers )) {
HXLINE(  35)			::haxe::ui::parsers::ui::ComponentParser_obj::_hx_register(HX_("xml",d7,6d,5b,00),hx::ClassOf< ::haxe::ui::parsers::ui::XMLParser >());
HXLINE(  36)			::haxe::ui::parsers::ui::ComponentParser_obj::_hx_register(HX_("json",28,42,68,46),hx::ClassOf< ::haxe::ui::parsers::ui::JSONParser >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentParser_obj,defaultParsers,(void))

void ComponentParser_obj::_hx_register(::String extension,hx::Class cls){
            	HX_GC_STACKFRAME(&_hx_pos_319fd69890a32220_44_register)
HXLINE(  45)		if (hx::IsNull( ::haxe::ui::parsers::ui::ComponentParser_obj::_parsers )) {
HXLINE(  46)			::haxe::ui::parsers::ui::ComponentParser_obj::_parsers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  48)		::haxe::ui::parsers::ui::ComponentParser_obj::_parsers->set(extension,cls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentParser_obj,_hx_register,(void))

int ComponentParser_obj::_nextId;

::String ComponentParser_obj::nextId(::String __o_prefix){
::String prefix = __o_prefix.Default(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_52_nextId)
HXLINE(  53)		::String s = (prefix + ::haxe::ui::parsers::ui::ComponentParser_obj::_nextId);
HXLINE(  54)		::haxe::ui::parsers::ui::ComponentParser_obj::_nextId++;
HXLINE(  55)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,nextId,return )

Float ComponentParser_obj::_hx_float(::String value){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_59_float)
HXDLIN(  59)		return ::Std_obj::parseFloat(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,_hx_float,return )

bool ComponentParser_obj::isPercentage(::String value){
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_62_isPercentage)
HXLINE(  63)		int _hx_tmp = value.indexOf(HX_("%",25,00,00,00),null());
HXDLIN(  63)		if ((_hx_tmp == (value.length - (int)1))) {
HXLINE(  64)			return true;
            		}
HXLINE(  66)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentParser_obj,isPercentage,return )


hx::ObjectPtr< ComponentParser_obj > ComponentParser_obj::__new() {
	hx::ObjectPtr< ComponentParser_obj > __this = new ComponentParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ComponentParser_obj > ComponentParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	ComponentParser_obj *__this = (ComponentParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentParser_obj), true, "haxe.ui.parsers.ui.ComponentParser"));
	*(void **)__this = ComponentParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentParser_obj::ComponentParser_obj()
{
}

void ComponentParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentParser);
	HX_MARK_MEMBER_NAME(_resourceResolver,"_resourceResolver");
	HX_MARK_END_CLASS();
}

void ComponentParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resourceResolver,"_resourceResolver");
}

hx::Val ComponentParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_resourceResolver") ) { return hx::Val( _resourceResolver ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = nextId_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { outValue = ( _nextId ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { outValue = ( _parsers ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isPercentage") ) { outValue = isPercentage_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultParsers") ) { outValue = defaultParsers_dyn(); return true; }
	}
	return false;
}

hx::Val ComponentParser_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_resourceResolver") ) { _resourceResolver=inValue.Cast<  ::haxe::ui::parsers::ui::resolvers::ResourceResolver >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { _nextId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { _parsers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void ComponentParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_resourceResolver","\x53","\x01","\x7c","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComponentParser_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::parsers::ui::resolvers::ResourceResolver*/ ,(int)offsetof(ComponentParser_obj,_resourceResolver),HX_HCSTRING("_resourceResolver","\x53","\x01","\x7c","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ComponentParser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ComponentParser_obj::_parsers,HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23")},
	{hx::fsInt,(void *) &ComponentParser_obj::_nextId,HX_HCSTRING("_nextId","\x4d","\x39","\xdb","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentParser_obj_sMemberFields[] = {
	HX_HCSTRING("_resourceResolver","\x53","\x01","\x7c","\xb1"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

static void ComponentParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComponentParser_obj::_parsers,"_parsers");
	HX_MARK_MEMBER_NAME(ComponentParser_obj::_nextId,"_nextId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComponentParser_obj::_parsers,"_parsers");
	HX_VISIT_MEMBER_NAME(ComponentParser_obj::_nextId,"_nextId");
};

#endif

hx::Class ComponentParser_obj::__mClass;

static ::String ComponentParser_obj_sStaticFields[] = {
	HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("defaultParsers","\xf3","\xff","\x40","\x19"),
	HX_HCSTRING("register","\x63","\xa6","\x9f","\xd0"),
	HX_HCSTRING("_nextId","\x4d","\x39","\xdb","\xe0"),
	HX_HCSTRING("nextId","\xae","\x27","\x64","\x72"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("isPercentage","\xa4","\xbb","\x4b","\xbe"),
	::String(null())
};

void ComponentParser_obj::__register()
{
	hx::Object *dummy = new ComponentParser_obj;
	ComponentParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.ComponentParser","\x4e","\x26","\x21","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentParser_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentParser_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ComponentParser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentParser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_319fd69890a32220_51_boot)
HXDLIN(  51)		_nextId = (int)0;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
