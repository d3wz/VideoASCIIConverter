# Changelog

All notable changes to VideoASCIIConverter will be documented here.

---

## v0.0.1

### Added
- Initial Visual Studio project
- Project folder structure (`src`, `include`, `assets`)
- Git repository
- Basic `ConsoleUI` class

---

## v0.0.2

### Added
- Cursor positioning
- Initial layout system
- Basic box drawing prototype

### Changed
- Began separating console logic from UI logic

---

## v0.0.3

### Added
- Dedicated Console class
- Unicode output using WriteConsoleW
- Console size configuration

### Changed
- Moved Windows console handling away from UI code

---

## v0.0.4

### Added
- Layout class
- LogoLoader class
- UTF-8 logo loading
- Unicode rendering using WriteConsoleW
- Console title management
- Console size management

### Changed
- Refactored ConsoleUI to use the Console class
- Moved Windows console functionality out of the UI layer

---

## v0.0.5

### Added
- Complete initial console interface layout.
- Logo rendering inside the UI.
- Settings menu rendering.
- Footer/status bar rendering.
- Dynamic menu item display with selected item indicator.
- Improved UI border drawing with Unicode box characters.

### Changed
- Refined console UI structure:
  - Console handles Windows API functionality.
  - ConsoleUI handles interface rendering.
  - Layout handles UI positioning constants.
  - LogoLoader handles ASCII logo loading.
- Adjusted layout dimensions for better logo and menu spacing.
- Improved footer positioning to prevent overlap with the border.
- Reduced ASCII logo size to better fit the interface.

### Fixed
- Fixed Unicode box characters displaying incorrectly.
- Fixed ASCII logo encoding/rendering issues.
- Fixed border alignment problems.
- Fixed footer rendering inside the UI border.
- Fixed layout elements overlapping due to incorrect coordinates.