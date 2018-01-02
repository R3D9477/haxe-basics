// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#define INCLUDED_haxe_ui_backend_ComponentBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,MouseEvent)
HX_DECLARE_CLASS2(hx,widgets,MouseState)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentBase_obj OBJ_;
		ComponentBase_obj();

	public:
		enum { _hx_ClassId = 0x4a06d0bc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentBase"); }
		static hx::ObjectPtr< ComponentBase_obj > __new();
		static hx::ObjectPtr< ComponentBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentBase_obj();

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
		::String __ToString() const { return HX_HCSTRING("ComponentBase","\x4e","\xf7","\xa1","\x26"); }

		static void __boot();
		static int convertColor(int c);
		static ::Dynamic convertColor_dyn();

		static ::Array< ::Dynamic> _inComponents;
		 ::haxe::ds::StringMap _eventMap;
		void createDelegate(bool native);
		::Dynamic createDelegate_dyn();

		 ::haxe::ui::core::TextDisplay _textDisplay;
		 ::haxe::ui::core::TextDisplay createTextDisplay(::String text);
		::Dynamic createTextDisplay_dyn();

		 ::haxe::ui::core::TextDisplay getTextDisplay();
		::Dynamic getTextDisplay_dyn();

		bool hasTextDisplay();
		::Dynamic hasTextDisplay_dyn();

		 ::haxe::ui::core::TextInput _textInput;
		 ::haxe::ui::core::TextInput createTextInput(::String text);
		::Dynamic createTextInput_dyn();

		 ::haxe::ui::core::TextInput getTextInput();
		::Dynamic getTextInput_dyn();

		bool hasTextInput();
		::Dynamic hasTextInput_dyn();

		 ::haxe::ui::core::ImageDisplay _imageDisplay;
		 ::haxe::ui::core::ImageDisplay createImageDisplay();
		::Dynamic createImageDisplay_dyn();

		 ::haxe::ui::core::ImageDisplay getImageDisplay();
		::Dynamic getImageDisplay_dyn();

		bool hasImageDisplay();
		::Dynamic hasImageDisplay_dyn();

		void removeImageDisplay();
		::Dynamic removeImageDisplay_dyn();

		 ::haxe::ui::core::Component _hx___parent;
		::Array< ::Dynamic> _hx___children;
		void handleCreate(bool native);
		::Dynamic handleCreate_dyn();

		 ::hx::widgets::Window window;
		void handleReady();
		::Dynamic handleReady_dyn();

		void createWindow( ::hx::widgets::Window parent);
		::Dynamic createWindow_dyn();

		void handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style);
		::Dynamic handleSize_dyn();

		 ::haxe::ui::core::Component handleAddComponent( ::haxe::ui::core::Component child);
		::Dynamic handleAddComponent_dyn();

		 ::haxe::ui::core::Component handleRemoveComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose);
		::Dynamic handleRemoveComponent_dyn();

		void handleVisibility(bool show);
		::Dynamic handleVisibility_dyn();

		void handleClipRect( ::haxe::ui::util::Rectangle value);
		::Dynamic handleClipRect_dyn();

		void handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style);
		::Dynamic handlePosition_dyn();

		void lock(hx::Null< bool >  recusive);
		::Dynamic lock_dyn();

		void unlock(hx::Null< bool >  recusive);
		::Dynamic unlock_dyn();

		int _repositionUnlockCount;
		void handlePreReposition();
		::Dynamic handlePreReposition_dyn();

		void handlePostReposition();
		::Dynamic handlePostReposition_dyn();

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic handleSetComponentIndex_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);
		::Dynamic applyStyle_dyn();

		 ::haxe::ds::StringMap _hx___props;
		 ::Dynamic get(::String name);
		::Dynamic get_dyn();

		void set(::String name, ::Dynamic value);
		::Dynamic set_dyn();

		bool has(::String name);
		::Dynamic has_dyn();

		 ::haxe::ds::StringMap _hx___eventsToMap;
		void mapEvent(::String type, ::Dynamic listener);
		::Dynamic mapEvent_dyn();

		void unmapEvent(::String type, ::Dynamic listener);
		::Dynamic unmapEvent_dyn();

		void _hx___onChangeEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onChangeEvent_dyn();

		bool _mouseOverFlag;
		void _hx___onMouseMove( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseMove_dyn();

		bool _mouseDownFlag;
		void _hx___onMouseDown( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseDown_dyn();

		void _hx___onMouseUp( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseUp_dyn();

		void _hx___onMouseOut( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseOut_dyn();

		void handleMouseOut( ::haxe::ui::backend::ComponentBase c, ::hx::widgets::MouseEvent mouseEvent);
		::Dynamic handleMouseOut_dyn();

		void _hx___onMouseEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentBase */ 
