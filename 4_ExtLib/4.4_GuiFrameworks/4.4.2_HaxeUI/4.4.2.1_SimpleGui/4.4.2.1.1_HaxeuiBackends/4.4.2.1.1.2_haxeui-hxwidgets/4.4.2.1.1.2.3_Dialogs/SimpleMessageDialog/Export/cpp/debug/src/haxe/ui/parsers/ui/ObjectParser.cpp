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
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo
#include <haxe/ui/parsers/ui/ComponentBindingInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#include <haxe/ui/parsers/ui/ComponentInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ObjectParser
#include <haxe/ui/parsers/ui/ObjectParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a198cca473fa045_8_new,"haxe.ui.parsers.ui.ObjectParser","new",0x39cfdfde,"haxe.ui.parsers.ui.ObjectParser.new","haxe/ui/parsers/ui/ObjectParser.hx",8,0x51598152)
HX_LOCAL_STACK_FRAME(_hx_pos_8a198cca473fa045_11_fromObject,"haxe.ui.parsers.ui.ObjectParser","fromObject",0xa20b800b,"haxe.ui.parsers.ui.ObjectParser.fromObject","haxe/ui/parsers/ui/ObjectParser.hx",11,0x51598152)
HX_LOCAL_STACK_FRAME(_hx_pos_8a198cca473fa045_17_parseComponent,"haxe.ui.parsers.ui.ObjectParser","parseComponent",0x671d674c,"haxe.ui.parsers.ui.ObjectParser.parseComponent","haxe/ui/parsers/ui/ObjectParser.hx",17,0x51598152)
HX_LOCAL_STACK_FRAME(_hx_pos_8a198cca473fa045_88_parseImport,"haxe.ui.parsers.ui.ObjectParser","parseImport",0x91340b76,"haxe.ui.parsers.ui.ObjectParser.parseImport","haxe/ui/parsers/ui/ObjectParser.hx",88,0x51598152)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void ObjectParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a198cca473fa045_8_new)
HXDLIN(   8)		super::__construct();
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
	if (inClassId<=(int)0x310ae04e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x310ae04e;
	} else {
		return inClassId==(int)0x350ca508;
	}
}

 ::haxe::ui::parsers::ui::ComponentInfo ObjectParser_obj::fromObject( ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_GC_STACKFRAME(&_hx_pos_8a198cca473fa045_11_fromObject)
HXLINE(  12)		 ::haxe::ui::parsers::ui::ComponentInfo component =  ::haxe::ui::parsers::ui::ComponentInfo_obj::__alloc( HX_CTX );
HXLINE(  13)		::haxe::ui::parsers::ui::ObjectParser_obj::parseComponent(component,obj,resourceResolver);
HXLINE(  14)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectParser_obj,fromObject,return )

void ObjectParser_obj::parseComponent( ::haxe::ui::parsers::ui::ComponentInfo component, ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_GC_STACKFRAME(&_hx_pos_8a198cca473fa045_17_parseComponent)
HXLINE(  18)		::String type = ::Reflect_obj::fields(obj)->__get((int)0);
HXLINE(  20)		component->type = type;
HXLINE(  21)		 ::Dynamic details = ::Reflect_obj::field(obj,type);
HXLINE(  23)		if ((type == HX_("import",65,a1,82,08))) {
HXLINE(  24)			::haxe::ui::parsers::ui::ObjectParser_obj::parseImport(component->parent,details,resourceResolver);
HXLINE(  25)			return;
            		}
HXLINE(  28)		{
HXLINE(  28)			int _g = (int)0;
HXDLIN(  28)			::Array< ::String > _g1 = ::Reflect_obj::fields(details);
HXDLIN(  28)			while((_g < _g1->length)){
HXLINE(  28)				::String propName = _g1->__get(_g);
HXDLIN(  28)				_g = (_g + (int)1);
HXLINE(  29)				::String propValue = ( (::String)(::Reflect_obj::field(details,propName)) );
HXLINE(  31)				::String _hx_switch_0 = propName;
            				if (  (_hx_switch_0==HX_("bindTo",98,e8,0d,ed)) ||  (_hx_switch_0==HX_("bindTransform",ef,f7,42,0f)) ){
HXLINE(  56)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("children",3f,19,6a,70)) ){
HXLINE(  58)					::cpp::VirtualArray children = ( (::cpp::VirtualArray)(::Reflect_obj::field(details,HX_("children",3f,19,6a,70))) );
HXLINE(  59)					{
HXLINE(  59)						int _g2 = (int)0;
HXDLIN(  59)						while((_g2 < children->get_length())){
HXLINE(  59)							 ::Dynamic childObj = children->__get(_g2);
HXDLIN(  59)							_g2 = (_g2 + (int)1);
HXLINE(  60)							 ::haxe::ui::parsers::ui::ComponentInfo child =  ::haxe::ui::parsers::ui::ComponentInfo_obj::__alloc( HX_CTX );
HXLINE(  61)							child->parent = component;
HXLINE(  62)							::haxe::ui::parsers::ui::ObjectParser_obj::parseComponent(child,childObj,resourceResolver);
HXLINE(  63)							if ((child->type != HX_("import",65,a1,82,08))) {
HXLINE(  64)								component->children->push(child);
            							}
            						}
            					}
HXLINE(  57)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE(  45)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage((HX_("",00,00,00,00) + propValue)) == true)) {
HXLINE(  46)						component->percentHeight = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float((HX_("",00,00,00,00) + propValue));
            					}
            					else {
HXLINE(  48)						component->height = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float((HX_("",00,00,00,00) + propValue));
            					}
HXLINE(  45)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("id",db,5b,00,00)) ){
HXLINE(  33)					component->id = propValue;
HXDLIN(  33)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  35)					component->left = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(propValue);
HXDLIN(  35)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("style",31,a5,1d,84)) ){
HXLINE(  53)					component->style = propValue;
HXDLIN(  53)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("styleNames",d7,e8,7a,16)) ){
HXLINE(  55)					component->styleNames = propValue;
HXDLIN(  55)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("text",ad,cc,f9,4c)) ){
HXLINE(  51)					component->text = propValue;
HXDLIN(  51)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE(  37)					component->top = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(propValue);
HXDLIN(  37)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE(  39)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage((HX_("",00,00,00,00) + propValue)) == true)) {
HXLINE(  40)						component->percentWidth = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float((HX_("",00,00,00,00) + propValue));
            					}
            					else {
HXLINE(  42)						component->width = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float((HX_("",00,00,00,00) + propValue));
            					}
HXLINE(  39)					goto _hx_goto_3;
            				}
            				/* default */{
HXLINE(  68)					::haxe::IMap_obj::set(component->properties,propName,propValue);
            				}
            				_hx_goto_3:;
            			}
            		}
HXLINE(  72)		::String bindTo = ( (::String)(::Reflect_obj::field(details,HX_("bindTo",98,e8,0d,ed))) );
HXLINE(  73)		if (hx::IsNotNull( bindTo )) {
HXLINE(  74)			if (hx::IsNull( component->id )) {
HXLINE(  75)				component->id = ::haxe::ui::parsers::ui::ComponentParser_obj::nextId(null());
            			}
HXLINE(  78)			 ::haxe::ui::parsers::ui::ComponentBindingInfo binding =  ::haxe::ui::parsers::ui::ComponentBindingInfo_obj::__alloc( HX_CTX );
HXLINE(  79)			binding->source = bindTo;
HXLINE(  80)			binding->target = component->id;
HXLINE(  81)			binding->transform = ( (::String)(::Reflect_obj::field(details,HX_("bindTransform",ef,f7,42,0f))) );
HXLINE(  82)			component->findRootComponent()->bindings->push(binding);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectParser_obj,parseComponent,(void))

void ObjectParser_obj::parseImport( ::haxe::ui::parsers::ui::ComponentInfo component, ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_8a198cca473fa045_88_parseImport)
HXDLIN(  88)		if (hx::IsNotNull(  ::Dynamic(obj->__Field(HX_("source",db,b0,31,32),hx::paccDynamic)) )) {
HXLINE(  89)			::String source = ( (::String)(obj->__Field(HX_("source",db,b0,31,32),hx::paccDynamic)) );
HXLINE(  90)			::String sourceData = resourceResolver->getResourceData(source);
HXLINE(  91)			if (hx::IsNotNull( sourceData )) {
HXLINE(  92)				::String extension = resourceResolver->extension(source);
HXLINE(  93)				 ::haxe::ui::parsers::ui::ComponentInfo c = ::haxe::ui::parsers::ui::ComponentParser_obj::get(extension)->parse(sourceData,resourceResolver);
HXLINE(  95)				component->findRootComponent()->styles = component->findRootComponent()->styles->concat(c->styles);
HXLINE(  96)				c->styles = ::Array_obj< ::String >::__new(0);
HXLINE(  98)				component->findRootComponent()->scriptlets = component->findRootComponent()->scriptlets->concat(c->scriptlets);
HXLINE(  99)				c->scriptlets = ::Array_obj< ::String >::__new(0);
HXLINE( 101)				component->findRootComponent()->bindings = component->findRootComponent()->bindings->concat(c->bindings);
HXLINE( 102)				c->bindings = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 104)				c->parent = component;
HXLINE( 105)				component->children->push(c);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectParser_obj,parseImport,(void))


hx::ObjectPtr< ObjectParser_obj > ObjectParser_obj::__new() {
	hx::ObjectPtr< ObjectParser_obj > __this = new ObjectParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ObjectParser_obj > ObjectParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	ObjectParser_obj *__this = (ObjectParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectParser_obj), true, "haxe.ui.parsers.ui.ObjectParser"));
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

bool ObjectParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"parseImport") ) { outValue = parseImport_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseComponent") ) { outValue = parseComponent_dyn(); return true; }
	}
	return false;
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

static ::String ObjectParser_obj_sStaticFields[] = {
	HX_HCSTRING("parseComponent","\x0a","\x22","\x75","\x53"),
	HX_HCSTRING("parseImport","\xf8","\x4d","\xbf","\x83"),
	::String(null())
};

void ObjectParser_obj::__register()
{
	hx::Object *dummy = new ObjectParser_obj;
	ObjectParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.ObjectParser","\xec","\x58","\xf7","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ObjectParser_obj_sStaticFields);
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
} // end namespace ui
