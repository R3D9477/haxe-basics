// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#define INCLUDED_haxe_ui_backend_hxwidgets_IconMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,IconMap)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES IconMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IconMap_obj OBJ_;
		IconMap_obj();

	public:
		enum { _hx_ClassId = 0x08b8e85e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.IconMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.IconMap"); }
		static hx::ObjectPtr< IconMap_obj > __new();
		static hx::ObjectPtr< IconMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IconMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IconMap","\x83","\x34","\x5e","\xa3"); }

		 ::haxe::ds::ObjectMap _objectsToImageList;
		 ::haxe::ds::ObjectMap _imageListToIcon;
		int getImageIndex( ::Dynamic object,::String icon, ::Dynamic setCallback);
		::Dynamic getImageIndex_dyn();

		int addImage( ::Dynamic object,::String icon, ::Dynamic setCallback);
		::Dynamic addImage_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_IconMap */ 
