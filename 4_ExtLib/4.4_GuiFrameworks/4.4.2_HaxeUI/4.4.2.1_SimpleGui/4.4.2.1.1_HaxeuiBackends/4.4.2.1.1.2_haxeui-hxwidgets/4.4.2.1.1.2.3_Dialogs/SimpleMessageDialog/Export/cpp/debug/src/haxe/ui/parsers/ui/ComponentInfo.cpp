// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7e5c70287155cdc1_34_new,"haxe.ui.parsers.ui.ComponentInfo","new",0xb367ab8f,"haxe.ui.parsers.ui.ComponentInfo.new","haxe/ui/parsers/ui/ComponentInfo.hx",34,0x65fc7ec1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e5c70287155cdc1_43_get_styleString,"haxe.ui.parsers.ui.ComponentInfo","get_styleString",0x46f0da28,"haxe.ui.parsers.ui.ComponentInfo.get_styleString","haxe/ui/parsers/ui/ComponentInfo.hx",43,0x65fc7ec1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e5c70287155cdc1_51_get_dataString,"haxe.ui.parsers.ui.ComponentInfo","get_dataString",0x97809c15,"haxe.ui.parsers.ui.ComponentInfo.get_dataString","haxe/ui/parsers/ui/ComponentInfo.hx",51,0x65fc7ec1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e5c70287155cdc1_58_findRootComponent,"haxe.ui.parsers.ui.ComponentInfo","findRootComponent",0xe6e78db1,"haxe.ui.parsers.ui.ComponentInfo.findRootComponent","haxe/ui/parsers/ui/ComponentInfo.hx",58,0x65fc7ec1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e5c70287155cdc1_66_validate,"haxe.ui.parsers.ui.ComponentInfo","validate",0x3fbc0b07,"haxe.ui.parsers.ui.ComponentInfo.validate","haxe/ui/parsers/ui/ComponentInfo.hx",66,0x65fc7ec1)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void ComponentInfo_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7e5c70287155cdc1_34_new)
HXLINE(  35)		this->properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		this->bindings = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  38)		this->scriptlets = ::Array_obj< ::String >::__new(0);
HXLINE(  39)		this->styles = ::Array_obj< ::String >::__new(0);
            	}

Dynamic ComponentInfo_obj::__CreateEmpty() { return new ComponentInfo_obj; }

void *ComponentInfo_obj::_hx_vtable = 0;

Dynamic ComponentInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentInfo_obj > _hx_result = new ComponentInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0438721d;
}

::String ComponentInfo_obj::get_styleString(){
            	HX_STACKFRAME(&_hx_pos_7e5c70287155cdc1_43_get_styleString)
HXLINE(  44)		if (hx::IsNull( this->style )) {
HXLINE(  45)			return null();
            		}
HXLINE(  47)		return ::StringTools_obj::replace(this->style,HX_("\"",22,00,00,00),HX_("'",27,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentInfo_obj,get_styleString,return )

::String ComponentInfo_obj::get_dataString(){
            	HX_STACKFRAME(&_hx_pos_7e5c70287155cdc1_51_get_dataString)
HXLINE(  52)		if (hx::IsNull( this->data )) {
HXLINE(  53)			return null();
            		}
HXLINE(  55)		return ::StringTools_obj::replace(this->data,HX_("\"",22,00,00,00),HX_("'",27,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentInfo_obj,get_dataString,return )

 ::haxe::ui::parsers::ui::ComponentInfo ComponentInfo_obj::findRootComponent(){
            	HX_STACKFRAME(&_hx_pos_7e5c70287155cdc1_58_findRootComponent)
HXLINE(  59)		 ::haxe::ui::parsers::ui::ComponentInfo r = hx::ObjectPtr<OBJ_>(this);
HXLINE(  60)		while(hx::IsNotNull( r->parent )){
HXLINE(  61)			r = r->parent;
            		}
HXLINE(  63)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentInfo_obj,findRootComponent,return )

void ComponentInfo_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_7e5c70287155cdc1_66_validate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentInfo_obj,validate,(void))


hx::ObjectPtr< ComponentInfo_obj > ComponentInfo_obj::__new() {
	hx::ObjectPtr< ComponentInfo_obj > __this = new ComponentInfo_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ComponentInfo_obj > ComponentInfo_obj::__alloc(hx::Ctx *_hx_ctx) {
	ComponentInfo_obj *__this = (ComponentInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentInfo_obj), true, "haxe.ui.parsers.ui.ComponentInfo"));
	*(void **)__this = ComponentInfo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentInfo_obj::ComponentInfo_obj()
{
}

void ComponentInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentInfo);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(percentWidth,"percentWidth");
	HX_MARK_MEMBER_NAME(percentHeight,"percentHeight");
	HX_MARK_MEMBER_NAME(contentWidth,"contentWidth");
	HX_MARK_MEMBER_NAME(contentHeight,"contentHeight");
	HX_MARK_MEMBER_NAME(percentContentWidth,"percentContentWidth");
	HX_MARK_MEMBER_NAME(percentContentHeight,"percentContentHeight");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(styleNames,"styleNames");
	HX_MARK_MEMBER_NAME(composite,"composite");
	HX_MARK_MEMBER_NAME(layoutName,"layoutName");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(bindings,"bindings");
	HX_MARK_MEMBER_NAME(scriptlets,"scriptlets");
	HX_MARK_MEMBER_NAME(styles,"styles");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(condition,"condition");
	HX_MARK_END_CLASS();
}

void ComponentInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(percentWidth,"percentWidth");
	HX_VISIT_MEMBER_NAME(percentHeight,"percentHeight");
	HX_VISIT_MEMBER_NAME(contentWidth,"contentWidth");
	HX_VISIT_MEMBER_NAME(contentHeight,"contentHeight");
	HX_VISIT_MEMBER_NAME(percentContentWidth,"percentContentWidth");
	HX_VISIT_MEMBER_NAME(percentContentHeight,"percentContentHeight");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(styleNames,"styleNames");
	HX_VISIT_MEMBER_NAME(composite,"composite");
	HX_VISIT_MEMBER_NAME(layoutName,"layoutName");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(bindings,"bindings");
	HX_VISIT_MEMBER_NAME(scriptlets,"scriptlets");
	HX_VISIT_MEMBER_NAME(styles,"styles");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(condition,"condition");
}

hx::Val ComponentInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"style") ) { return hx::Val( style ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"styles") ) { return hx::Val( styles ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"bindings") ) { return hx::Val( bindings ); }
		if (HX_FIELD_EQ(inName,"validate") ) { return hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"composite") ) { return hx::Val( composite ); }
		if (HX_FIELD_EQ(inName,"condition") ) { return hx::Val( condition ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { return hx::Val( styleNames ); }
		if (HX_FIELD_EQ(inName,"layoutName") ) { return hx::Val( layoutName ); }
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"scriptlets") ) { return hx::Val( scriptlets ); }
		if (HX_FIELD_EQ(inName,"dataString") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_dataString() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_styleString() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return hx::Val( percentWidth ); }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { return hx::Val( contentWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return hx::Val( percentHeight ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { return hx::Val( contentHeight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataString") ) { return hx::Val( get_dataString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_styleString") ) { return hx::Val( get_styleString_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"findRootComponent") ) { return hx::Val( findRootComponent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { return hx::Val( percentContentWidth ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { return hx::Val( percentContentHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ComponentInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::haxe::ui::parsers::ui::ComponentInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styles") ) { styles=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bindings") ) { bindings=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"composite") ) { composite=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"condition") ) { condition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { styleNames=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layoutName") ) { layoutName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptlets") ) { scriptlets=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { contentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { contentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { percentContentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { percentContentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));
	outFields->push(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));
	outFields->push(HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0"));
	outFields->push(HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8"));
	outFields->push(HX_HCSTRING("percentContentWidth","\x72","\x94","\x55","\x51"));
	outFields->push(HX_HCSTRING("percentContentHeight","\xfb","\xc7","\xdb","\x8f"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"));
	outFields->push(HX_HCSTRING("composite","\x07","\x10","\xa5","\x12"));
	outFields->push(HX_HCSTRING("layoutName","\x15","\xea","\x9e","\xe3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"));
	outFields->push(HX_HCSTRING("scriptlets","\xc3","\xc3","\xb7","\x55"));
	outFields->push(HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));
	outFields->push(HX_HCSTRING("styleString","\xe2","\xbc","\xc7","\x88"));
	outFields->push(HX_HCSTRING("dataString","\x9b","\xee","\xd1","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComponentInfo_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ComponentInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,top),HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,percentWidth),HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,percentHeight),HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,contentWidth),HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,contentHeight),HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,percentContentWidth),HX_HCSTRING("percentContentWidth","\x72","\x94","\x55","\x51")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,percentContentHeight),HX_HCSTRING("percentContentHeight","\xfb","\xc7","\xdb","\x8f")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,styleNames),HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComponentInfo_obj,composite),HX_HCSTRING("composite","\x07","\x10","\xa5","\x12")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,layoutName),HX_HCSTRING("layoutName","\x15","\xea","\x9e","\xe3")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ComponentInfo_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ui::parsers::ui::ComponentInfo*/ ,(int)offsetof(ComponentInfo_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ComponentInfo_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ComponentInfo_obj,bindings),HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ComponentInfo_obj,scriptlets),HX_HCSTRING("scriptlets","\xc3","\xc3","\xb7","\x55")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ComponentInfo_obj,styles),HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(ComponentInfo_obj,condition),HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ComponentInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentInfo_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"),
	HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"),
	HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0"),
	HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8"),
	HX_HCSTRING("percentContentWidth","\x72","\x94","\x55","\x51"),
	HX_HCSTRING("percentContentHeight","\xfb","\xc7","\xdb","\x8f"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"),
	HX_HCSTRING("composite","\x07","\x10","\xa5","\x12"),
	HX_HCSTRING("layoutName","\x15","\xea","\x9e","\xe3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"),
	HX_HCSTRING("scriptlets","\xc3","\xc3","\xb7","\x55"),
	HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"),
	HX_HCSTRING("get_styleString","\x79","\x74","\xa9","\x49"),
	HX_HCSTRING("get_dataString","\xe4","\x76","\xc7","\x72"),
	HX_HCSTRING("findRootComponent","\x42","\x1e","\xb8","\x7c"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void ComponentInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentInfo_obj::__mClass;

void ComponentInfo_obj::__register()
{
	hx::Object *dummy = new ComponentInfo_obj;
	ComponentInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.ComponentInfo","\x1d","\x38","\x11","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComponentInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
