// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_CallbackMap
#define INCLUDED_haxe_ui_util_CallbackMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,CallbackMap)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES CallbackMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CallbackMap_obj OBJ_;
		CallbackMap_obj();

	public:
		enum { _hx_ClassId = 0x6cfd8b33 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.CallbackMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.util.CallbackMap"); }
		static hx::ObjectPtr< CallbackMap_obj > __new();
		static hx::ObjectPtr< CallbackMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallbackMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CallbackMap","\xb7","\x69","\x03","\xb1"); }

		 ::haxe::ds::StringMap _map;
		bool add(::String key, ::Dynamic callback);
		::Dynamic add_dyn();

		bool remove(::String key, ::Dynamic callback);
		::Dynamic remove_dyn();

		void removeAll(::String key);
		::Dynamic removeAll_dyn();

		void invoke(::String key, ::Dynamic param);
		::Dynamic invoke_dyn();

		void invokeAndRemove(::String key, ::Dynamic param);
		::Dynamic invokeAndRemove_dyn();

		int count(::String key);
		::Dynamic count_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_CallbackMap */ 
