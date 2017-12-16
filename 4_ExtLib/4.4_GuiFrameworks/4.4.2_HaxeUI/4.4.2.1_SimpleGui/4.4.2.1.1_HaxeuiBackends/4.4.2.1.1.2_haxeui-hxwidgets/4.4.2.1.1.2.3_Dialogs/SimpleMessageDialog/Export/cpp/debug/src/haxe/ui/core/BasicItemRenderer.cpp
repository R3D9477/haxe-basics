// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37f329f8c8130634_8_new,"haxe.ui.core.BasicItemRenderer","new",0x42c53359,"haxe.ui.core.BasicItemRenderer.new","haxe/ui/core/BasicItemRenderer.hx",8,0xa8515618)
HX_LOCAL_STACK_FRAME(_hx_pos_3e74121ef41c3a79_1_cloneComponent,"haxe.ui.core.BasicItemRenderer","cloneComponent",0xc2ae6747,"haxe.ui.core.BasicItemRenderer.cloneComponent","src/haxe/ui/core/BasicItemRenderer.hx",1,0x509b1aed)
HX_LOCAL_STACK_FRAME(_hx_pos_3e74121ef41c3a79_2_self,"haxe.ui.core.BasicItemRenderer","self",0x2d15c273,"haxe.ui.core.BasicItemRenderer.self","src/haxe/ui/core/BasicItemRenderer.hx",2,0x509b1aed)
namespace haxe{
namespace ui{
namespace core{

void BasicItemRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37f329f8c8130634_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  11)		this->set_percentWidth((int)100);
HXLINE(  13)		 ::haxe::ui::containers::HBox hbox =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  14)		hbox->set_percentWidth((int)100);
HXLINE(  16)		 ::haxe::ui::components::Image icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  17)		icon->set_id(HX_("icon",79,e7,b2,45));
HXLINE(  18)		icon->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE(  19)		icon->hide();
HXLINE(  20)		hbox->addComponent(icon);
HXLINE(  22)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  23)		label->set_id(HX_("value",71,7f,b8,31));
HXLINE(  24)		label->set_percentWidth((int)100);
HXLINE(  25)		label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE(  26)		label->hide();
HXLINE(  27)		hbox->addComponent(label);
HXLINE(  29)		this->addComponent(hbox);
            	}

Dynamic BasicItemRenderer_obj::__CreateEmpty() { return new BasicItemRenderer_obj; }

void *BasicItemRenderer_obj::_hx_vtable = 0;

Dynamic BasicItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BasicItemRenderer_obj > _hx_result = new BasicItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3200b6b7) {
		if (inClassId<=(int)0x0d19f62b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0d19f62b;
		} else {
			return inClassId==(int)0x3200b6b7;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component BasicItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3e74121ef41c3a79_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::core::BasicItemRenderer c = ( ( ::haxe::ui::core::BasicItemRenderer)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component BasicItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3e74121ef41c3a79_2_self)
HXDLIN(   2)		return  ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__new() {
	hx::ObjectPtr< BasicItemRenderer_obj > __this = new BasicItemRenderer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__alloc(hx::Ctx *_hx_ctx) {
	BasicItemRenderer_obj *__this = (BasicItemRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BasicItemRenderer_obj), true, "haxe.ui.core.BasicItemRenderer"));
	*(void **)__this = BasicItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicItemRenderer_obj::BasicItemRenderer_obj()
{
}

hx::Val BasicItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BasicItemRenderer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BasicItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicItemRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void BasicItemRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BasicItemRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class BasicItemRenderer_obj::__mClass;

void BasicItemRenderer_obj::__register()
{
	hx::Object *dummy = new BasicItemRenderer_obj;
	BasicItemRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.BasicItemRenderer","\xe7","\x92","\xc8","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BasicItemRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BasicItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BasicItemRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BasicItemRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicItemRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
