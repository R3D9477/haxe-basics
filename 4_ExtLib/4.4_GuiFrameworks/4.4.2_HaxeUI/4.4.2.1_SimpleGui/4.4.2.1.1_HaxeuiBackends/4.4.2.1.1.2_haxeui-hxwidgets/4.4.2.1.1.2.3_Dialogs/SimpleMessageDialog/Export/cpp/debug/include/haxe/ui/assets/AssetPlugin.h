// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_assets_AssetPlugin
#define INCLUDED_haxe_ui_assets_AssetPlugin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,assets,AssetPlugin)

namespace haxe{
namespace ui{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES AssetPlugin_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetPlugin_obj OBJ_;
		AssetPlugin_obj();

	public:
		enum { _hx_ClassId = 0x06bb247e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.assets.AssetPlugin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.assets.AssetPlugin"); }
		static hx::ObjectPtr< AssetPlugin_obj > __new();
		static hx::ObjectPtr< AssetPlugin_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPlugin_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetPlugin","\xa3","\x14","\x78","\xbe"); }

		 ::haxe::ds::StringMap _props;
		 ::Dynamic invoke( ::Dynamic asset);
		::Dynamic invoke_dyn();

		void setProperty(::String name,::String value);
		::Dynamic setProperty_dyn();

		::String getProperty(::String name,::String defaultValue);
		::Dynamic getProperty_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace assets

#endif /* INCLUDED_haxe_ui_assets_AssetPlugin */ 
