// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#define INCLUDED_haxe_ui_ToolkitAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,ui,ToolkitAssets)
HX_DECLARE_CLASS3(haxe,ui,assets,AssetPlugin)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsBase)
HX_DECLARE_CLASS3(haxe,ui,util,CallbackMap)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ToolkitAssets_obj : public  ::haxe::ui::backend::AssetsBase_obj
{
	public:
		typedef  ::haxe::ui::backend::AssetsBase_obj super;
		typedef ToolkitAssets_obj OBJ_;
		ToolkitAssets_obj();

	public:
		enum { _hx_ClassId = 0x021ff223 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.ToolkitAssets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.ToolkitAssets"); }
		static hx::ObjectPtr< ToolkitAssets_obj > __new();
		static hx::ObjectPtr< ToolkitAssets_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ToolkitAssets_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ToolkitAssets","\xc1","\x07","\xee","\x5d"); }

		static  ::haxe::ui::ToolkitAssets _instance;
		static  ::haxe::ui::ToolkitAssets get_instance();
		static ::Dynamic get_instance_dyn();

		::Array< ::Dynamic> preloadList;
		 ::Dynamic options;
		 ::haxe::ds::StringMap _fontCache;
		 ::haxe::ui::util::CallbackMap _fontCallbacks;
		 ::haxe::ds::StringMap _imageCache;
		 ::haxe::ui::util::CallbackMap _imageCallbacks;
		void getFont(::String resourceId, ::Dynamic callback,hx::Null< bool >  useCache);
		::Dynamic getFont_dyn();

		void _onFontLoaded(::String resourceId, ::Dynamic font);
		::Dynamic _onFontLoaded_dyn();

		void getImage(::String resourceId, ::Dynamic callback,hx::Null< bool >  useCache);
		::Dynamic getImage_dyn();

		void _onImageLoaded(::String resourceId, ::Dynamic imageInfo);
		::Dynamic _onImageLoaded_dyn();

		::String getText(::String resourceId);
		::Dynamic getText_dyn();

		 ::haxe::io::Bytes getBytes( ::Dynamic resourceId);
		::Dynamic getBytes_dyn();

		::Array< ::Dynamic> _plugins;
		void addPlugin( ::haxe::ui::assets::AssetPlugin plugin);
		::Dynamic addPlugin_dyn();

		 ::Dynamic runPlugins( ::Dynamic asset);
		::Dynamic runPlugins_dyn();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_ToolkitAssets */ 
