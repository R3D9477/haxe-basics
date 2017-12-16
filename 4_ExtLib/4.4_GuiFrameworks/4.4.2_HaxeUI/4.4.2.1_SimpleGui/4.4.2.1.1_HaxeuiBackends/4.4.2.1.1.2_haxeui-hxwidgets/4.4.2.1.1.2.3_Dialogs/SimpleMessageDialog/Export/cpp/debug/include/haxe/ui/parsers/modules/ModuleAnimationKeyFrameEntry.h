// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleAnimationKeyFrameEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleAnimationKeyFrameEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleAnimationKeyFrameEntry_obj OBJ_;
		ModuleAnimationKeyFrameEntry_obj();

	public:
		enum { _hx_ClassId = 0x208c3d7d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry"); }
		static hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > __new();
		static hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleAnimationKeyFrameEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleAnimationKeyFrameEntry","\xcc","\xbb","\x54","\xa0"); }

		int time;
		 ::haxe::ds::StringMap componentRefs;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry */ 
