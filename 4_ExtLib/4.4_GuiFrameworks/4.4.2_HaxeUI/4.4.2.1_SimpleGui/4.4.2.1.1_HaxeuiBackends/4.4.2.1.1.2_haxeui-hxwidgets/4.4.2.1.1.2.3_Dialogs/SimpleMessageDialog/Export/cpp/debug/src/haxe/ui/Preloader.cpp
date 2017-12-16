// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Preloader
#include <haxe/ui/Preloader.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_186b1b74991ba353_13_new,"haxe.ui.Preloader","new",0xd0b111f6,"haxe.ui.Preloader.new","haxe/ui/Preloader.hx",13,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_19_createChildren,"haxe.ui.Preloader","createChildren",0xe6673285,"haxe.ui.Preloader.createChildren","haxe/ui/Preloader.hx",19,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_25_validateLayout,"haxe.ui.Preloader","validateLayout",0xd043220a,"haxe.ui.Preloader.validateLayout","haxe/ui/Preloader.hx",25,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_36_progress,"haxe.ui.Preloader","progress",0x70aa3657,"haxe.ui.Preloader.progress","haxe/ui/Preloader.hx",36,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_51_increment,"haxe.ui.Preloader","increment",0x76d69c45,"haxe.ui.Preloader.increment","haxe/ui/Preloader.hx",51,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_55_complete,"haxe.ui.Preloader","complete",0x6a473f63,"haxe.ui.Preloader.complete","haxe/ui/Preloader.hx",55,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_ae49193c699fa17e_1_cloneComponent,"haxe.ui.Preloader","cloneComponent",0x4a1983ca,"haxe.ui.Preloader.cloneComponent","src/haxe/ui/Preloader.hx",1,0xe21b2d25)
HX_LOCAL_STACK_FRAME(_hx_pos_ae49193c699fa17e_2_self,"haxe.ui.Preloader","self",0xcd8cad36,"haxe.ui.Preloader.self","src/haxe/ui/Preloader.hx",2,0xe21b2d25)
namespace haxe{
namespace ui{

void Preloader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_13_new)
HXLINE(  14)		super::__construct();
HXLINE(  15)		this->set_id(HX_("preloader",76,e4,7b,82));
HXLINE(  16)		this->set_styleString(HX_("width:auto;height:auto;",91,a0,d1,fd));
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7140e8dc) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x7140e8dc;
		}
	} else {
		return inClassId==(int)0x7fba9fc4;
	}
}

void Preloader_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_186b1b74991ba353_19_createChildren)
HXLINE(  20)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  21)		label->set_text(HX_("Loading",5c,f6,43,d6));
HXLINE(  22)		this->addComponent(label);
            	}


bool Preloader_obj::validateLayout(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_25_validateLayout)
HXLINE(  26)		bool b = this->super::validateLayout();
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if ((this->get_width() > (int)0)) {
HXLINE(  27)			_hx_tmp = (this->get_height() > (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  28)			Float _hx_tmp1 = ((Float)::haxe::ui::core::Screen_obj::get_instance()->get_width() / (Float)(int)2);
HXDLIN(  28)			this->set_left((_hx_tmp1 - ((Float)this->get_width() / (Float)(int)2)));
HXLINE(  29)			Float _hx_tmp2 = ((Float)::haxe::ui::core::Screen_obj::get_instance()->get_height() / (Float)(int)2);
HXDLIN(  29)			this->set_top((_hx_tmp2 - ((Float)this->get_height() / (Float)(int)2)));
            		}
HXLINE(  31)		return b;
            	}


void Preloader_obj::progress(int current,int max){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_36_progress)
HXLINE(  37)		this->_current = current;
HXLINE(  38)		this->_max = max;
HXLINE(  40)		if ((current > (int)0)) {
HXLINE(  41)			 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  42)			::String text = (label->get_text() + HX_(".",2e,00,00,00));
HXLINE(  43)			if (::StringTools_obj::endsWith(text,HX_("....",80,e0,8a,1e))) {
HXLINE(  44)				text = HX_("Loading",5c,f6,43,d6);
            			}
HXLINE(  46)			label->set_text(text);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,progress,(void))

void Preloader_obj::increment(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_51_increment)
HXDLIN(  51)		this->progress((this->_current + (int)1),this->_max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,increment,(void))

void Preloader_obj::complete(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_55_complete)
HXDLIN(  55)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,complete,(void))

 ::haxe::ui::core::Component Preloader_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_ae49193c699fa17e_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::Preloader c = ( ( ::haxe::ui::Preloader)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Preloader_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ae49193c699fa17e_2_self)
HXDLIN(   2)		return  ::haxe::ui::Preloader_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "haxe.ui.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

hx::Val Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { return hx::Val( _max ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return hx::Val( _current ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress_dyn() ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return hx::Val( increment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateLayout") ) { return hx::Val( validateLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Preloader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Preloader_obj,_current),HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05")},
	{hx::fsInt,(int)offsetof(Preloader_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("validateLayout","\xe0","\x87","\x80","\xac"),
	HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Preloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Preloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Object *dummy = new Preloader_obj;
	Preloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.Preloader","\x04","\x9f","\x9f","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Preloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Preloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
