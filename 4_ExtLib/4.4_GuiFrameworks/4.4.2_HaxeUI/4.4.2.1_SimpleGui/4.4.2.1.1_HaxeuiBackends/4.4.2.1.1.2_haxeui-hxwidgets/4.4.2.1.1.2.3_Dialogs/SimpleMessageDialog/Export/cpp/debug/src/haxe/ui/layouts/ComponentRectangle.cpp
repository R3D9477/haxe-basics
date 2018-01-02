// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#include <haxe/ui/layouts/ComponentRectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e44871b12cb69b0_132_new,"haxe.ui.layouts.ComponentRectangle","new",0x926f699b,"haxe.ui.layouts.ComponentRectangle.new","haxe/ui/layouts/HorizontalContinuousLayout.hx",132,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_2e44871b12cb69b0_135_apply,"haxe.ui.layouts.ComponentRectangle","apply",0x275c2369,"haxe.ui.layouts.ComponentRectangle.apply","haxe/ui/layouts/HorizontalContinuousLayout.hx",135,0x640fb469)
namespace haxe{
namespace ui{
namespace layouts{

void ComponentRectangle_obj::__construct( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_2e44871b12cb69b0_132_new)
HXDLIN( 132)		super::__construct(left,top,width,height);
            	}

Dynamic ComponentRectangle_obj::__CreateEmpty() { return new ComponentRectangle_obj; }

void *ComponentRectangle_obj::_hx_vtable = 0;

Dynamic ComponentRectangle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentRectangle_obj > _hx_result = new ComponentRectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ComponentRectangle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e6fd861) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e6fd861;
	} else {
		return inClassId==(int)0x3745a853;
	}
}

void ComponentRectangle_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_2e44871b12cb69b0_135_apply)
HXLINE( 136)		this->component->moveComponent(this->left,this->top);
HXLINE( 137)		this->component->resizeComponent(this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentRectangle_obj,apply,(void))


hx::ObjectPtr< ComponentRectangle_obj > ComponentRectangle_obj::__new( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height) {
	hx::ObjectPtr< ComponentRectangle_obj > __this = new ComponentRectangle_obj();
	__this->__construct(left,top,width,height);
	return __this;
}

hx::ObjectPtr< ComponentRectangle_obj > ComponentRectangle_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height) {
	ComponentRectangle_obj *__this = (ComponentRectangle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentRectangle_obj), true, "haxe.ui.layouts.ComponentRectangle"));
	*(void **)__this = ComponentRectangle_obj::_hx_vtable;
	__this->__construct(left,top,width,height);
	return __this;
}

ComponentRectangle_obj::ComponentRectangle_obj()
{
}

void ComponentRectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentRectangle);
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_END_CLASS();
}

void ComponentRectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(component,"component");
}

hx::Val ComponentRectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return hx::Val( component ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ComponentRectangle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentRectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComponentRectangle_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(ComponentRectangle_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ComponentRectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentRectangle_obj_sMemberFields[] = {
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void ComponentRectangle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentRectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentRectangle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentRectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentRectangle_obj::__mClass;

void ComponentRectangle_obj::__register()
{
	hx::Object *dummy = new ComponentRectangle_obj;
	ComponentRectangle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.ComponentRectangle","\x29","\x00","\x46","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComponentRectangle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentRectangle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentRectangle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentRectangle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentRectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentRectangle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
