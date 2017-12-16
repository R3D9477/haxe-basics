// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds_EnumValueMap
#define INCLUDED_haxe_ds_EnumValueMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES EnumValueMap_obj : public  ::haxe::ds::BalancedTree_obj
{
	public:
		typedef  ::haxe::ds::BalancedTree_obj super;
		typedef EnumValueMap_obj OBJ_;
		EnumValueMap_obj();

	public:
		enum { _hx_ClassId = 0x13b42f39 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.EnumValueMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.EnumValueMap"); }
		static hx::ObjectPtr< EnumValueMap_obj > __new();
		static hx::ObjectPtr< EnumValueMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnumValueMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void set_41d0cb46( ::Dynamic k, ::Dynamic v);
		::String __ToString() const { return HX_HCSTRING("EnumValueMap","\xec","\x9b","\xfb","\x92"); }

		int compare( ::Dynamic _tmp_k1, ::Dynamic _tmp_k2);

		int compareArgs(::cpp::VirtualArray a1,::cpp::VirtualArray a2);
		::Dynamic compareArgs_dyn();

		int compareArg( ::Dynamic v1, ::Dynamic v2);
		::Dynamic compareArg_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_EnumValueMap */ 
