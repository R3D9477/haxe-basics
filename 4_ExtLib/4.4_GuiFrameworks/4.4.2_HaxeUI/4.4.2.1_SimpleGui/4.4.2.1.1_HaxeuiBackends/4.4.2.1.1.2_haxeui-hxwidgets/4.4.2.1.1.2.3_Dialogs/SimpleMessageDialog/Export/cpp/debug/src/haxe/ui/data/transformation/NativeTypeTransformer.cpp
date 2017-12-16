// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer
#include <haxe/ui/data/transformation/NativeTypeTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_99355ce8de20b40d_4_new,"haxe.ui.data.transformation.NativeTypeTransformer","new",0xfe6aa0c7,"haxe.ui.data.transformation.NativeTypeTransformer.new","haxe/ui/data/transformation/NativeTypeTransformer.hx",4,0x2c0d8449)
HX_LOCAL_STACK_FRAME(_hx_pos_99355ce8de20b40d_7_transformFrom,"haxe.ui.data.transformation.NativeTypeTransformer","transformFrom",0xb7481c1d,"haxe.ui.data.transformation.NativeTypeTransformer.transformFrom","haxe/ui/data/transformation/NativeTypeTransformer.hx",7,0x2c0d8449)
namespace haxe{
namespace ui{
namespace data{
namespace transformation{

void NativeTypeTransformer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_99355ce8de20b40d_4_new)
            	}

Dynamic NativeTypeTransformer_obj::__CreateEmpty() { return new NativeTypeTransformer_obj; }

void *NativeTypeTransformer_obj::_hx_vtable = 0;

Dynamic NativeTypeTransformer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NativeTypeTransformer_obj > _hx_result = new NativeTypeTransformer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeTypeTransformer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77924dfb;
}

static ::haxe::ui::data::transformation::IItemTransformer_obj _hx_haxe_ui_data_transformation_NativeTypeTransformer__hx_haxe_ui_data_transformation_IItemTransformer= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ui::data::transformation::NativeTypeTransformer_obj::transformFrom,
};

void *NativeTypeTransformer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc4b4b36a: return &_hx_haxe_ui_data_transformation_NativeTypeTransformer__hx_haxe_ui_data_transformation_IItemTransformer;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic NativeTypeTransformer_obj::transformFrom( ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_99355ce8de20b40d_7_transformFrom)
HXLINE(   8)		 ::Dynamic o = null();
HXLINE(   9)		if (::Std_obj::is(i,hx::ClassOf< ::String >())) {
HXLINE(  10)			o =  ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("value",71,7f,b8,31),i)
            				->setFixed(1,HX_("text",ad,cc,f9,4c),i));
            		}
            		else {
HXLINE(  11)			bool _hx_tmp;
HXDLIN(  11)			bool _hx_tmp1;
HXDLIN(  11)			if (!(::Std_obj::is(i,hx::ClassOf< int >()))) {
HXLINE(  11)				_hx_tmp1 = ::Std_obj::is(i,hx::ClassOf< ::Float >());
            			}
            			else {
HXLINE(  11)				_hx_tmp1 = true;
            			}
HXDLIN(  11)			if (!(_hx_tmp1)) {
HXLINE(  11)				_hx_tmp = ::Std_obj::is(i,hx::ClassOf< bool >());
            			}
            			else {
HXLINE(  11)				_hx_tmp = true;
            			}
HXDLIN(  11)			if (_hx_tmp) {
HXLINE(  12)				o =  ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("value",71,7f,b8,31),i));
            			}
            			else {
HXLINE(  14)				o = i;
            			}
            		}
HXLINE(  16)		return o;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeTypeTransformer_obj,transformFrom,return )


hx::ObjectPtr< NativeTypeTransformer_obj > NativeTypeTransformer_obj::__new() {
	hx::ObjectPtr< NativeTypeTransformer_obj > __this = new NativeTypeTransformer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< NativeTypeTransformer_obj > NativeTypeTransformer_obj::__alloc(hx::Ctx *_hx_ctx) {
	NativeTypeTransformer_obj *__this = (NativeTypeTransformer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NativeTypeTransformer_obj), false, "haxe.ui.data.transformation.NativeTypeTransformer"));
	*(void **)__this = NativeTypeTransformer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeTypeTransformer_obj::NativeTypeTransformer_obj()
{
}

hx::Val NativeTypeTransformer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return hx::Val( transformFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NativeTypeTransformer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NativeTypeTransformer_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeTypeTransformer_obj_sMemberFields[] = {
	HX_HCSTRING("transformFrom","\xf6","\x24","\x10","\x71"),
	::String(null()) };

static void NativeTypeTransformer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeTypeTransformer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeTypeTransformer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeTypeTransformer_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeTypeTransformer_obj::__mClass;

void NativeTypeTransformer_obj::__register()
{
	hx::Object *dummy = new NativeTypeTransformer_obj;
	NativeTypeTransformer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.data.transformation.NativeTypeTransformer","\x55","\x31","\xb3","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeTypeTransformer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NativeTypeTransformer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeTypeTransformer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeTypeTransformer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeTypeTransformer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeTypeTransformer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
} // end namespace transformation
