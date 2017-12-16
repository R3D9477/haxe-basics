// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaLayout
#include <haxe/ui/components/TextAreaLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60aa7b97791d4837_324_new,"haxe.ui.components.TextAreaLayout","new",0xb76d823c,"haxe.ui.components.TextAreaLayout.new","haxe/ui/components/TextArea.hx",324,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_60aa7b97791d4837_325_repositionChildren,"haxe.ui.components.TextAreaLayout","repositionChildren",0x439fc65f,"haxe.ui.components.TextAreaLayout.repositionChildren","haxe/ui/components/TextArea.hx",325,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_60aa7b97791d4837_348_resizeChildren,"haxe.ui.components.TextAreaLayout","resizeChildren",0xfa0466f7,"haxe.ui.components.TextAreaLayout.resizeChildren","haxe/ui/components/TextArea.hx",348,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_60aa7b97791d4837_373_get_usableSize,"haxe.ui.components.TextAreaLayout","get_usableSize",0x77c9afc6,"haxe.ui.components.TextAreaLayout.get_usableSize","haxe/ui/components/TextArea.hx",373,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{

void TextAreaLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60aa7b97791d4837_324_new)
HXDLIN( 324)		super::__construct();
            	}

Dynamic TextAreaLayout_obj::__CreateEmpty() { return new TextAreaLayout_obj; }

void *TextAreaLayout_obj::_hx_vtable = 0;

Dynamic TextAreaLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextAreaLayout_obj > _hx_result = new TextAreaLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextAreaLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x44642714) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x44642714;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void TextAreaLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_60aa7b97791d4837_325_repositionChildren)
HXLINE( 326)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(HX_("textarea-hscroll",a2,22,fa,36),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 327)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(HX_("textarea-vscroll",30,a1,26,7d),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 329)		Float ucx = this->get_innerWidth();
HXLINE( 330)		Float ucy = this->get_innerHeight();
HXLINE( 332)		bool _hx_tmp;
HXDLIN( 332)		if (hx::IsNotNull( hscroll )) {
HXLINE( 332)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 332)			_hx_tmp = false;
            		}
HXDLIN( 332)		if (_hx_tmp) {
HXLINE( 333)			hscroll->set_left(this->get_paddingLeft());
HXLINE( 334)			Float _hx_tmp1 = (ucy - hscroll->get_componentHeight());
HXDLIN( 334)			hscroll->set_top((_hx_tmp1 + this->get_paddingBottom()));
            		}
HXLINE( 337)		bool _hx_tmp2;
HXDLIN( 337)		if (hx::IsNotNull( vscroll )) {
HXLINE( 337)			_hx_tmp2 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 337)			_hx_tmp2 = false;
            		}
HXDLIN( 337)		if (_hx_tmp2) {
HXLINE( 338)			Float _hx_tmp3 = (ucx - vscroll->get_componentWidth());
HXDLIN( 338)			vscroll->set_left((_hx_tmp3 + this->get_paddingRight()));
HXLINE( 339)			vscroll->set_top(this->get_paddingTop());
            		}
HXLINE( 342)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 343)			 ::haxe::ui::core::TextInput _hx_tmp4 = this->get_component()->getTextInput();
HXDLIN( 343)			_hx_tmp4->set_left(this->get_paddingLeft());
HXLINE( 344)			 ::haxe::ui::core::TextInput _hx_tmp5 = this->get_component()->getTextInput();
HXDLIN( 344)			_hx_tmp5->set_top(this->get_paddingTop());
            		}
            	}


void TextAreaLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_60aa7b97791d4837_348_resizeChildren)
HXLINE( 349)		this->super::resizeChildren();
HXLINE( 351)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(HX_("textarea-hscroll",a2,22,fa,36),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 352)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(HX_("textarea-vscroll",30,a1,26,7d),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 354)		 ::haxe::ui::util::Size usableSize = this->get_usableSize();
HXLINE( 355)		bool _hx_tmp;
HXDLIN( 355)		if (hx::IsNotNull( hscroll )) {
HXLINE( 355)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 355)			_hx_tmp = false;
            		}
HXDLIN( 355)		if (_hx_tmp) {
HXLINE( 356)			hscroll->set_width(usableSize->width);
            		}
HXLINE( 359)		bool _hx_tmp1;
HXDLIN( 359)		if (hx::IsNotNull( vscroll )) {
HXLINE( 359)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 359)			_hx_tmp1 = false;
            		}
HXDLIN( 359)		if (_hx_tmp1) {
HXLINE( 360)			vscroll->set_height(usableSize->height);
            		}
HXLINE( 363)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 364)			 ::haxe::ui::util::Size size = usableSize;
HXLINE( 366)			 ::haxe::ui::core::TextInput _hx_tmp2 = this->get_component()->getTextInput();
HXDLIN( 366)			_hx_tmp2->set_width((size->width - (int)2));
HXLINE( 367)			 ::haxe::ui::core::TextInput _hx_tmp3 = this->get_component()->getTextInput();
HXDLIN( 367)			_hx_tmp3->set_height((size->height - (int)1));
            		}
            	}


 ::haxe::ui::util::Size TextAreaLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_60aa7b97791d4837_373_get_usableSize)
HXLINE( 374)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE( 375)		 ::haxe::ui::util::Size size1 = size;
HXDLIN( 375)		size1->width = (size1->width - (int)1);
HXLINE( 376)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(HX_("textarea-hscroll",a2,22,fa,36),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 377)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(HX_("textarea-vscroll",30,a1,26,7d),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 378)		bool _hx_tmp;
HXDLIN( 378)		if (hx::IsNotNull( hscroll )) {
HXLINE( 378)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 378)			_hx_tmp = false;
            		}
HXDLIN( 378)		if (_hx_tmp) {
HXLINE( 379)			 ::haxe::ui::util::Size size2 = size;
HXDLIN( 379)			Float size3 = size2->height;
HXDLIN( 379)			size2->height = (size3 - hscroll->get_componentHeight());
            		}
HXLINE( 381)		bool _hx_tmp1;
HXDLIN( 381)		if (hx::IsNotNull( vscroll )) {
HXLINE( 381)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 381)			_hx_tmp1 = false;
            		}
HXDLIN( 381)		if (_hx_tmp1) {
HXLINE( 382)			 ::haxe::ui::util::Size size4 = size;
HXDLIN( 382)			Float size5 = size4->width;
HXDLIN( 382)			size4->width = (size5 - vscroll->get_componentWidth());
            		}
HXLINE( 385)		return size;
            	}



hx::ObjectPtr< TextAreaLayout_obj > TextAreaLayout_obj::__new() {
	hx::ObjectPtr< TextAreaLayout_obj > __this = new TextAreaLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextAreaLayout_obj > TextAreaLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextAreaLayout_obj *__this = (TextAreaLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaLayout_obj), true, "haxe.ui.components.TextAreaLayout"));
	*(void **)__this = TextAreaLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextAreaLayout_obj::TextAreaLayout_obj()
{
}

hx::Val TextAreaLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextAreaLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextAreaLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TextAreaLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	::String(null()) };

static void TextAreaLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAreaLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextAreaLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAreaLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TextAreaLayout_obj::__mClass;

void TextAreaLayout_obj::__register()
{
	hx::Object *dummy = new TextAreaLayout_obj;
	TextAreaLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextAreaLayout","\x4a","\xf4","\x80","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextAreaLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextAreaLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextAreaLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextAreaLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
