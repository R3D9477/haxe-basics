// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Stack
#include <haxe/ui/containers/Stack.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad9617ddf2751f03_9_new,"haxe.ui.containers.Stack","new",0x47464cd0,"haxe.ui.containers.Stack.new","haxe/ui/containers/Stack.hx",9,0xd31c1301)
HX_LOCAL_STACK_FRAME(_hx_pos_888dae6a878f8207_1_cloneComponent,"haxe.ui.containers.Stack","cloneComponent",0xbd7de330,"haxe.ui.containers.Stack.cloneComponent","src/haxe/ui/containers/Stack.hx",1,0xaf93da16)
HX_LOCAL_STACK_FRAME(_hx_pos_888dae6a878f8207_2_self,"haxe.ui.containers.Stack","self",0x198af11c,"haxe.ui.containers.Stack.self","src/haxe/ui/containers/Stack.hx",2,0xaf93da16)
namespace haxe{
namespace ui{
namespace containers{

void Stack_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad9617ddf2751f03_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic Stack_obj::__CreateEmpty() { return new Stack_obj; }

void *Stack_obj::_hx_vtable = 0;

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stack_obj > _hx_result = new Stack_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stack_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x062c07dc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x062c07dc;
		} else {
			return inClassId==(int)0x41081cbb;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component Stack_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_888dae6a878f8207_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::Stack c = ( ( ::haxe::ui::containers::Stack)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Stack_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_888dae6a878f8207_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::Stack_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Stack_obj > Stack_obj::__new() {
	hx::ObjectPtr< Stack_obj > __this = new Stack_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Stack_obj > Stack_obj::__alloc(hx::Ctx *_hx_ctx) {
	Stack_obj *__this = (Stack_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stack_obj), true, "haxe.ui.containers.Stack"));
	*(void **)__this = Stack_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Stack_obj::Stack_obj()
{
}

hx::Val Stack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Stack_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Stack_obj_sStaticStorageInfo = 0;
#endif

static ::String Stack_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Stack_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stack_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#endif

hx::Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	hx::Object *dummy = new Stack_obj;
	Stack_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.Stack","\xde","\xe4","\xd3","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stack_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stack_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stack_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stack_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stack_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
