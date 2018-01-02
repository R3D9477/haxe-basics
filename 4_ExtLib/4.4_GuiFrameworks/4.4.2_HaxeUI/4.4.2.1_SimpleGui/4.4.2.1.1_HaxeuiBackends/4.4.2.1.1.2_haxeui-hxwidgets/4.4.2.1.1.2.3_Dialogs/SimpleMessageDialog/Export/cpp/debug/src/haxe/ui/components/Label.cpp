// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_LabelDefaultTextBehaviour
#include <haxe/ui/components/LabelDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_LabelLayout
#include <haxe/ui/components/LabelLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_164a75306b06a4aa_20_new,"haxe.ui.components.Label","new",0x9c253780,"haxe.ui.components.Label.new","haxe/ui/components/Label.hx",20,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_164a75306b06a4aa_34_createDefaults,"haxe.ui.components.Label","createDefaults",0x02abfc8e,"haxe.ui.components.Label.createDefaults","haxe/ui/components/Label.hx",34,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_164a75306b06a4aa_45_set_text,"haxe.ui.components.Label","set_text",0xf736a68a,"haxe.ui.components.Label.set_text","haxe/ui/components/Label.hx",45,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_164a75306b06a4aa_56_applyStyle,"haxe.ui.components.Label","applyStyle",0x91f6ddc3,"haxe.ui.components.Label.applyStyle","haxe/ui/components/Label.hx",56,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_164a75306b06a4aa_67_validateData,"haxe.ui.components.Label","validateData",0x77fc0ac0,"haxe.ui.components.Label.validateData","haxe/ui/components/Label.hx",67,0xeb990e51)
static const ::String _hx_array_data_5cdbb78e_5[] = {
	HX_("text",ad,cc,f9,4c),HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6ceadf79f90df052_1_cloneComponent,"haxe.ui.components.Label","cloneComponent",0x272e9680,"haxe.ui.components.Label.cloneComponent","src/haxe/ui/components/Label.hx",1,0xc810d566)
HX_LOCAL_STACK_FRAME(_hx_pos_6ceadf79f90df052_2_self,"haxe.ui.components.Label","self",0x07b9606c,"haxe.ui.components.Label.self","src/haxe/ui/components/Label.hx",2,0xc810d566)
HX_LOCAL_STACK_FRAME(_hx_pos_62684b65caf855e4_1_get_textAlign,"haxe.ui.components.Label","get_textAlign",0xffe849cf,"haxe.ui.components.Label.get_textAlign","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_62684b65caf855e4_1_set_textAlign,"haxe.ui.components.Label","set_textAlign",0x44ee2bdb,"haxe.ui.components.Label.set_textAlign","?",1,0x0000003f)
namespace haxe{
namespace ui{
namespace components{

void Label_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_20_new)
HXDLIN(  20)		super::__construct();
            	}

Dynamic Label_obj::__CreateEmpty() { return new Label_obj; }

void *Label_obj::_hx_vtable = 0;

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Label_obj > _hx_result = new Label_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Label_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c120604) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x4c120604;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void Label_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_164a75306b06a4aa_34_createDefaults)
HXLINE(  35)		this->super::createDefaults();
HXLINE(  36)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  36)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::LabelDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  36)		this->defaultBehaviours(_g);
HXLINE(  39)		this->_defaultLayout =  ::haxe::ui::components::LabelLayout_obj::__alloc( HX_CTX );
            	}


::String Label_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_45_set_text)
HXLINE(  46)		if ((value == this->_text)) {
HXLINE(  47)			return value;
            		}
HXLINE(  50)		value = this->super::set_text(value);
HXLINE(  51)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (hx::IsNotNull( this->_layout )) {
HXLINE(  52)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (!(_hx_tmp)) {
HXLINE(  52)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXLINE(  53)		return value;
            	}


void Label_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_56_applyStyle)
HXLINE(  57)		this->super::applyStyle(style);
HXLINE(  58)		if ((this->hasTextDisplay() == true)) {
HXLINE(  59)			this->getTextDisplay()->set_textStyle(style);
            		}
            	}


void Label_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_67_validateData)
HXLINE(  68)		this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_text));
HXLINE(  69)		this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_5cdbb78e_5,2));
            	}


 ::haxe::ui::core::Component Label_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_6ceadf79f90df052_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Label c = ( ( ::haxe::ui::components::Label)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Label_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_6ceadf79f90df052_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
            	}


::String Label_obj::get_textAlign(){
            	HX_STACKFRAME(&_hx_pos_62684b65caf855e4_1_get_textAlign)
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->get_style() )) {
HXDLIN(   1)			_hx_tmp = hx::IsNull( this->get_style()->textAlign );
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (_hx_tmp) {
HXDLIN(   1)			return null();
            		}
HXDLIN(   1)		return this->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_textAlign,return )

::String Label_obj::set_textAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_62684b65caf855e4_1_set_textAlign)
HXDLIN(   1)		if ((this->customStyle->textAlign == value)) {
HXDLIN(   1)			return value;
            		}
HXDLIN(   1)		if (hx::IsNull( this->_style )) {
HXDLIN(   1)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
            		}
HXDLIN(   1)		this->customStyle->textAlign = value;
HXDLIN(   1)		this->invalidate(HX_("style",31,a5,1d,84));
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->_layout )) {
HXDLIN(   1)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (!(_hx_tmp)) {
HXDLIN(   1)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXDLIN(   1)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_textAlign,return )


hx::ObjectPtr< Label_obj > Label_obj::__new() {
	hx::ObjectPtr< Label_obj > __this = new Label_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Label_obj > Label_obj::__alloc(hx::Ctx *_hx_ctx) {
	Label_obj *__this = (Label_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Label_obj), true, "haxe.ui.components.Label"));
	*(void **)__this = Label_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Label_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_textAlign() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return hx::Val( _textAlign ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return hx::Val( get_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return hx::Val( set_textAlign_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Label_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textAlign(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _textAlign=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Label_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Label_obj,_textAlign),HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Label_obj_sStaticStorageInfo = 0;
#endif

static ::String Label_obj_sMemberFields[] = {
	HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	::String(null()) };

static void Label_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Label_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#endif

hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Object *dummy = new Label_obj;
	Label_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Label","\x8e","\xb7","\xdb","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Label_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Label_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Label_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Label_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Label_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
