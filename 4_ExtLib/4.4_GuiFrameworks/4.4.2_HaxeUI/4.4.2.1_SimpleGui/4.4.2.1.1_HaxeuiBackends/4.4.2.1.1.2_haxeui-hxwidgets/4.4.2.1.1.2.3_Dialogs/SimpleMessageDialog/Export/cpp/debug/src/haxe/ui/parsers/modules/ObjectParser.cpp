// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry
#include <haxe/ui/parsers/modules/ModuleComponentEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry
#include <haxe/ui/parsers/modules/ModuleResourceEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry
#include <haxe/ui/parsers/modules/ModuleThemeEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry
#include <haxe/ui/parsers/modules/ModuleThemeStyleEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ObjectParser
#include <haxe/ui/parsers/modules/ObjectParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31c7cfb0015bdd22_4_new,"haxe.ui.parsers.modules.ObjectParser","new",0x08afe723,"haxe.ui.parsers.modules.ObjectParser.new","haxe/ui/parsers/modules/ObjectParser.hx",4,0x8bf3944b)
HX_LOCAL_STACK_FRAME(_hx_pos_31c7cfb0015bdd22_5_fromObject,"haxe.ui.parsers.modules.ObjectParser","fromObject",0x3ae31b66,"haxe.ui.parsers.modules.ObjectParser.fromObject","haxe/ui/parsers/modules/ObjectParser.hx",5,0x8bf3944b)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ObjectParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_31c7cfb0015bdd22_4_new)
HXDLIN(   4)		super::__construct();
            	}

Dynamic ObjectParser_obj::__CreateEmpty() { return new ObjectParser_obj; }

void *ObjectParser_obj::_hx_vtable = 0;

Dynamic ObjectParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectParser_obj > _hx_result = new ObjectParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x078bbee0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x078bbee0;
	} else {
		return inClassId==(int)0x5b91306b;
	}
}

 ::haxe::ui::parsers::modules::Module ObjectParser_obj::fromObject( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_31c7cfb0015bdd22_5_fromObject)
HXLINE(   6)		 ::haxe::ui::parsers::modules::Module module =  ::haxe::ui::parsers::modules::Module_obj::__alloc( HX_CTX );
HXLINE(   8)		module->id = ( (::String)(obj->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) );
HXLINE(   9)		if (hx::IsNotNull(  ::Dynamic(obj->__Field(HX_("resources",e5,d7,b0,39),hx::paccDynamic)) )) {
HXLINE(  10)			::cpp::VirtualArray resources = ( (::cpp::VirtualArray)(obj->__Field(HX_("resources",e5,d7,b0,39),hx::paccDynamic)) );
HXLINE(  11)			{
HXLINE(  11)				int _g = (int)0;
HXDLIN(  11)				while((_g < resources->get_length())){
HXLINE(  11)					 ::Dynamic r = resources->__get(_g);
HXDLIN(  11)					_g = (_g + (int)1);
HXLINE(  12)					 ::haxe::ui::parsers::modules::ModuleResourceEntry resourceEntry =  ::haxe::ui::parsers::modules::ModuleResourceEntry_obj::__alloc( HX_CTX );
HXLINE(  13)					resourceEntry->path = ( (::String)(r->__Field(HX_("path",a5,e5,51,4a),hx::paccDynamic)) );
HXLINE(  14)					resourceEntry->prefix = ( (::String)(r->__Field(HX_("prefix",92,d9,b6,ae),hx::paccDynamic)) );
HXLINE(  15)					module->resourceEntries->push(resourceEntry);
            				}
            			}
            		}
HXLINE(  19)		if (hx::IsNotNull(  ::Dynamic(obj->__Field(HX_("components",16,b5,1e,5a),hx::paccDynamic)) )) {
HXLINE(  20)			::cpp::VirtualArray components = ( (::cpp::VirtualArray)(obj->__Field(HX_("components",16,b5,1e,5a),hx::paccDynamic)) );
HXLINE(  21)			{
HXLINE(  21)				int _g1 = (int)0;
HXDLIN(  21)				while((_g1 < components->get_length())){
HXLINE(  21)					 ::Dynamic c = components->__get(_g1);
HXDLIN(  21)					_g1 = (_g1 + (int)1);
HXLINE(  22)					 ::haxe::ui::parsers::modules::ModuleComponentEntry classEntry =  ::haxe::ui::parsers::modules::ModuleComponentEntry_obj::__alloc( HX_CTX );
HXLINE(  23)					classEntry->classPackage = ( (::String)(::Reflect_obj::field(c,HX_("package",86,2b,b1,41))) );
HXLINE(  24)					classEntry->className = ( (::String)(::Reflect_obj::field(c,HX_("name",4b,72,ff,48))) );
HXLINE(  25)					classEntry->classAlias = ( (::String)(::Reflect_obj::field(c,HX_("alias",90,51,91,21))) );
HXLINE(  26)					module->componentEntries->push(classEntry);
            				}
            			}
            		}
HXLINE(  30)		if (hx::IsNotNull(  ::Dynamic(obj->__Field(HX_("themes",4a,ca,27,86),hx::paccDynamic)) )) {
HXLINE(  31)			 ::Dynamic themes =  ::Dynamic(obj->__Field(HX_("themes",4a,ca,27,86),hx::paccDynamic));
HXLINE(  32)			{
HXLINE(  32)				int _g2 = (int)0;
HXDLIN(  32)				::Array< ::String > _g11 = ::Reflect_obj::fields(themes);
HXDLIN(  32)				while((_g2 < _g11->length)){
HXLINE(  32)					::String themeId = _g11->__get(_g2);
HXDLIN(  32)					_g2 = (_g2 + (int)1);
HXLINE(  33)					 ::Dynamic t = ::Reflect_obj::field(themes,themeId);
HXLINE(  34)					 ::haxe::ui::parsers::modules::ModuleThemeEntry theme =  ::haxe::ui::parsers::modules::ModuleThemeEntry_obj::__alloc( HX_CTX );
HXLINE(  35)					theme->name = themeId;
HXLINE(  36)					theme->parent = ( (::String)(t->__Field(HX_("parent",2a,05,7e,ed),hx::paccDynamic)) );
HXLINE(  37)					if (hx::IsNotNull( ( (::cpp::VirtualArray)(t->__Field(HX_("styles",22,e6,d2,15),hx::paccDynamic)) ) )) {
HXLINE(  38)						::cpp::VirtualArray styles = ( (::cpp::VirtualArray)(t->__Field(HX_("styles",22,e6,d2,15),hx::paccDynamic)) );
HXLINE(  39)						{
HXLINE(  39)							int _g21 = (int)0;
HXDLIN(  39)							while((_g21 < styles->get_length())){
HXLINE(  39)								 ::Dynamic s = styles->__get(_g21);
HXDLIN(  39)								_g21 = (_g21 + (int)1);
HXLINE(  40)								 ::haxe::ui::parsers::modules::ModuleThemeStyleEntry styleEntry =  ::haxe::ui::parsers::modules::ModuleThemeStyleEntry_obj::__alloc( HX_CTX );
HXLINE(  41)								styleEntry->resource = ( (::String)(s->__Field(HX_("resource",ce,5c,a0,12),hx::paccDynamic)) );
HXLINE(  42)								styleEntry->condition = ( (::String)(s->__Field(HX_("condition",9b,e9,33,fc),hx::paccDynamic)) );
HXLINE(  43)								theme->styles->push(styleEntry);
            							}
            						}
            					}
HXLINE(  46)					module->themeEntries->set(theme->name,theme);
            				}
            			}
            		}
HXLINE(  50)		return module;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectParser_obj,fromObject,return )


hx::ObjectPtr< ObjectParser_obj > ObjectParser_obj::__new() {
	hx::ObjectPtr< ObjectParser_obj > __this = new ObjectParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ObjectParser_obj > ObjectParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	ObjectParser_obj *__this = (ObjectParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectParser_obj), false, "haxe.ui.parsers.modules.ObjectParser"));
	*(void **)__this = ObjectParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ObjectParser_obj::ObjectParser_obj()
{
}

hx::Val ObjectParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromObject") ) { return hx::Val( fromObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ObjectParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ObjectParser_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectParser_obj_sMemberFields[] = {
	HX_HCSTRING("fromObject","\xc9","\x83","\x83","\x58"),
	::String(null()) };

static void ObjectParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectParser_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectParser_obj::__mClass;

void ObjectParser_obj::__register()
{
	hx::Object *dummy = new ObjectParser_obj;
	ObjectParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ObjectParser","\xb1","\x19","\x07","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
