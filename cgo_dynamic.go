//go:build !static

package unicorn

// #cgo LDFLAGS: -lunicorn -Wl,-rpath,/usr/local/lib
import "C"
